/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 13:10:01 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/19 21:21:11 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
		The strchr() function returns a pointer to  the  first
		occurrence of the character c in the string s.

		Here "character" means "byte"; these functions do  not
		work with wide or multibyte characters.

RETURN VALUE
		The  strchr() and strrchr() functions return a pointer
		to the matched character or NULL if the  character  is
		not  found.   The  terminating null byte is considered
		part of the string, so that if c is specified as '\0',
		these functions return a pointer to the terminator.

*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}
