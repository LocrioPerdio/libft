/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:31:49 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/29 15:17:33 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countw(const char *s, int c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			words++;
		i++;
	}
	return (words);
}


/*
//char *fill_word(char *s1, char *s2, size_t len)

char	**ft_split(char const *s, char c)
{
	char	**w_array;
	size_t	i;
	size_t	j;

	if (!s || c == '\0')
		return (ft_strdup(""));
	w_array = malloc(ft_countw(s, c) + 1);
	if (!w_array)
		return (NULL);
	while (s[i])
	{
		
	}
	// ft_free
	return (w_array);
}*/
