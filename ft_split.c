/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:31:49 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/30 17:00:41 by paduarte         ###   ########.fr       */
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
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

char	*fill_word(const char *s, size_t start, size_t end)
{
	size_t	i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

void	*ft_free(char **w_array, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(w_array[i]);
		i++;
	}
	free(w_array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**w_array;
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	if (!s )
		return (NULL);
	w_array = malloc(sizeof(char *) * (ft_countw(s, c) + 1));
	if (!w_array)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		w_array[j++] = fill_word(s, start, i);
		if (!w_array[j - 1])
			return(ft_free(w_array, j));
	}
	w_array[j] = NULL;
	return (w_array);
}


