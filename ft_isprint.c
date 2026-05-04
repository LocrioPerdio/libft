/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:03:23 by paduarte          #+#    #+#             */
/*   Updated: 2026/05/04 11:52:04 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int main(void)
{
	printf("%d \n", ft_isprint('a'));
	printf("%d \n", isprint('a'));
	printf("%d \n", ft_isprint('\b'));
	printf("%d \n", isprint('\b'));
	return (0);
}
*/
