/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 16:00:05 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/19 16:13:26 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)

{
	size_t  i;
	size_t  s_len;
	size_t  d_len;
	size_t  j;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	i = s_len;
	j = 0;
	if (size == 0)
		return (s_len + d_len);
	while (src && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (s_len + d_len);
}

