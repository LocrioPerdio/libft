/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 14:18:05 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/21 13:05:59 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
		The  memchr() function scans the initial n bytes of the
		memory area pointed to by s for the first  instance  of
		c.   Both c and the bytes of the memory area pointed to
		by s are interpreted as unsigned char.
RETURN VALUE
		The  memchr()  and memrchr() functions return a pointer
		to the matching byte or NULL if the character does  not
		occur in the given memory area.

*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
