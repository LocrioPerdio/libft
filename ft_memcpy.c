/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:09:48 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/27 13:27:35 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
		The  memcpy()  function copies n bytes from memory area src to
			memory area dest.  The memory areas
		must not overlap.  Use memmove(3) if the memory areas do overlap.

RETURN VALUE
		The memcpy() function returns a pointer to dest.

*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if ((!dest && !src) || n == 0)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
