/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:25:11 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/07 21:18:20 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	new_node = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
int main(void) 
{
  t_list node1;
  t_list node2;
  t_list node3;
  t_list *new_list;
  
  node1.content = "Rikku";
  node1.next = &node2;
  node2.content = "Eiko";
  node2.next = &node3;
  node3.content = "Vivi";
  node3.next = NULL;
  new_list = ft_lstmap(&node1, to_upper, del_content);
  while (new_list)
    {
        printf("%s\n", (char *)new_list->content);
        new_list = new_list->next;
    }
  free(new_list);
   return(0);
}
*/