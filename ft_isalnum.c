/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:12:24 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/04 11:52:04 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
/*
int main(void)
{
	printf("%d \n", ft_isalnum('a'));
	printf("%d \n", isalnum('a'));
	printf("%d \n", ft_isalnum('\b'));
	printf("%d \n", isalnum('\b'));
	return (0);
}
*/