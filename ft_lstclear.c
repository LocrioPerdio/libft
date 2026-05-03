/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:55:51 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/03 16:37:29 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Deletes and free the memory of the element passed as parameter and all the
following elements using 'del' and free(3). Finally, the initial pointer must
be set to NULL.

*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	ptr = NULL;
	while (*lst)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
	free(*lst);
	*lst = NULL;
}
