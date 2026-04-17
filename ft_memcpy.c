/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:09:48 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/16 12:27:34 by paduarte         ###   ########.fr       */
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
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	i = 0;
	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		ptrd[i] = ptrs[i];
		i++;
	}
	return (dest);
}
