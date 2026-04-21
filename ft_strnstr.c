/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 16:15:39 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/21 11:16:14 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
		The  strnstr()  function  locates  the  first  occurrence 
		of the null-terminated string little in the  string  big,
			 where  not  more  than  len  characters  are
		searched.
		Characters  that  appear after  a  ‘\0’ character are not searched.
		Since the strnstr() function is a FreeBSD specific API,
			it should only  be  used
		when portability is not a concern.

RETURN VALUES
		If  little is an empty string,
			big is returned; if little occurs nowhere in big,
		NULL is returned; otherwise a pointer to the first character 
		of the first occurrence of little is returned.
*/
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && (i + j) < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
