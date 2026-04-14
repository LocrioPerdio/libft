/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:34:12 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/13 18:01:40 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  memset() function fills the first n bytes of the memory area pointed to by
       s with the constant byte c.
*/

void	*ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *ptr;

    i = 0;
    ptr = (unsigned char *)s;
    while (i < n)
    {
        ptr[i] = (unsigned char)c; 
        i++;
    }
    return (s);
}
