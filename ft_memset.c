/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:34:12 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/16 12:06:15 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  memset() function fills the first n bytes
 of the memory area pointed to by
		s with the constant byte c.
*/
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return ((void *)ptr);
}
