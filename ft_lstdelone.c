/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:28:48 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/08 20:23:57 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
/*
int main(void) 
{
  t_list *node;
  
  char *value = malloc(6);
  strcpy(value, "Rikku");
  node = ft_lstnew(value);
    
    printf("Contenido nodo: %s", (char *)node->content);
    ft_lstdelone(node, del);
   
    return(0);
}
*/