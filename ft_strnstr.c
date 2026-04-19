/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 16:15:39 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/19 21:22:39 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       The  strnstr()  function  locates  the  first  occurrence of the null-terminated
       string little in the  string  big,  where  not  more  than  len  characters  are
       searched.   Characters  that  appear  after  a  ‘\0’ character are not searched.
       Since the strnstr() function is a FreeBSD specific API, it should only  be  used
       when portability is not a concern.

RETURN VALUES
       If  little is an empty string, big is returned; if little occurs nowhere in big,
       NULL is returned; otherwise a pointer to the first character of the first occur‐
       rence of little is returned.
*/
#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len);