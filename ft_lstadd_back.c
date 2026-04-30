/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:18:47 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/30 15:05:31 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This function lets us add a new element to the end of an existing list.

void	ft_lstadd_back(t_list **lst, t_list *new)

{
	t_list *ptr;

	if (!lst)
		return;
	ptr = *lst;
	while (ptr->next)
		ptr = ptr->next;
	if (!ptr)
		*lst = new;
	ptr->next = new;
}
