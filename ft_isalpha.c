/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:47:08 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/14 16:57:37 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 checks  for an alphabetic character; in the standard "C" locale,
              it is equivalent to (isupper(c) ||  islower(c)).   In  some  lo‐
              cales, there may be additional characters for which isalpha() is
              true—letters which are neither uppercase nor lowercase.

    The values returned are nonzero if  the  character  c  falls  into  the
    tested class, and zero if not.

*/

int		ft_isalpha(int c)
{
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        return (1);
    else
    return (0);
}
