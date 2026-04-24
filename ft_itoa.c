/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:47:49 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/24 13:23:45 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		if (n == INT_MIN)
		{
			n = n / 10;
			count++;
		}
		n = n * (-1);
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	count++;
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	int		len;

	len = (ft_numlen(n));
	res = malloc(sizeof(char) * (len + 1));
	i = len - 1;
	if (!res)
		return (NULL);
	if (n < 0)
	{
		if (n == INT_MIN)
			return ("-2147483647");
		n = n * (-1);
		res[0] = '-';
	}
	while (n > 9)
	{
		res[i] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	res[i] = n + 48;
	return (res);
}
