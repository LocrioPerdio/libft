/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 18:07:58 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/13 18:19:28 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  The  bzero()  function  erases  the  data  in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes  con‐
       taining '\0') to that area.
       */
void	ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *ptr;

    i = 0;
    ptr = (unsigned char *)s;
    while (i < n)
    {
        ptr[i] = '\0';
        i++;
    }
}

