/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:25:11 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/29 14:58:55 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Iterate over the list 'lst' and apply the function 'f' to the content of each
 elements. Create a new list resulting of the successive applications of 'f'.
 The function 'del' is used to destroy the content of an element if necessary.
*/

/* check if lst or f or del is NULL */
/* loop over lst */
/* create a new element */
/* if new elem is null, clear the new list */
/* add the new element to the back of the list */
/* finally, return the new list */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = malloc(ft_lstsize(lst));
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
