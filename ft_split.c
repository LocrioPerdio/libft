/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:31:49 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/23 14:27:46 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// que pasa si el array empieza con el caracter c o si todos los caracteres fueran ese?

size_t	ft_countw(const char *s, int c)
{
	size_t	words;
	size_t	i;

	words = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			words++;
		i++;
	}
	return (words);
}

int	is_newword(char a, char b)
{
	if (a == b)
		return (0);
	return (1);
}

//char *fill_word(char *s1, char *s2, size_t len)

char	**ft_split(char const *s, char c)
{
	char	**w_array;
	size_t	i;
	size_t	j;

	if (!s || c == '\0')
		return (NULL); // cambiar pr ft_strdup("");
	w_array = malloc(ft_countw(s, c) + 1);
	if (!w_array)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (is_newword(s[i], c))
			{
            ft_fillword(w_array, s, j - i);
            j = 0;
            i++;
            }
        else
        {
		i++;
		j++;
        }
	}
	// ft_free
	return (w_array);
}
