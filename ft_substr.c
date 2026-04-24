/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 22:33:31 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/22 12:36:57 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	count;
	size_t	s_len;

	count = 0;
	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len || len == 0)
		return (ft_strdup(""));
	if (len > (s_len - start))
		len = (s_len - start);
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (count < len)
	{
		sub[count] = s[start];
		count++;
		start++;
	}
	sub[count] = '\0';
	return (sub);
}
