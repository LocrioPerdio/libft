/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 14:04:49 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/16 14:35:06 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
		The memmove() function copies n bytes from memory area
		src  to  memory area dest.  The memory areas may over‐
		lap: copying takes place as though the  bytes  in  src
		are  first copied into a temporary array that does not
		overlap src or dest, and the  bytes  are  then  copied
		from the temporary array to dest.

RETURN VALUE
		The memmove() function returns a pointer to dest.
*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}
