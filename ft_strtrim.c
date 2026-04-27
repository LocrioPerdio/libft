/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:59:08 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/22 17:40:33 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s1 || !set)
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s1);
	len = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	len = j - i;
	trimmed = malloc(len + 1);
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + i, len);
	trimmed[len] = '\0';
	return (trimmed);
}
