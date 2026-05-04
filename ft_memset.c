/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:34:12 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/04 11:02:22 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return ((void *)ptr);
}
/*
int main(void)
{
    char s[] = "holi!";
    printf("%p \n", ft_memset(s, 'a', 2));
    printf("%p \n", memset(s, 'a', 2));
    return (0);
}
*/