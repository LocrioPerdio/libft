/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:46:03 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/16 11:19:59 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*checks  whether  c is a 7-bit unsigned char value that fits into
   the ASCII character set.
   The values returned are nonzero if  the  character  c  falls  into  the
		tested class, and zero if not.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
