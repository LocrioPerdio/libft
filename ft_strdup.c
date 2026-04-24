/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:41:54 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/21 22:24:00 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
		The  strdup()  function  returns  a pointer to a new string which is a
		duplicate of the string s.  Memory for the new
		string is obtained with malloc(3), and can be freed with free(3).


RETURN VALUE
		On success, the strdup() function returns a pointer to the duplicated
		string.  It returns NULL if insufficient memory
		was available, with errno set to indicate the error.

*/
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = malloc(ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
