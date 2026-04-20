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
char	*ft_strnstr(const char *big, const char *little, size_t len)


char    *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if ((unsigned char)*s == (unsigned char)c)
            return ((char *)s);
        s++;
    }
    if ((unsigned char)c == '\0')
        return ((char *)s);
    return (NULL);
}

size_t    ft_strlen(const char *s)
{
    int    count;

    count = 0;
    while (s[count])
        count++;
    return (count);
}

int	ft_charcmp(const char c1, const char c2)
{
	
		if ((unsigned char)c1 == (unsigned char)c2)
		    return (0);
		 else
		    return (1);
}

char    *ft_strnstr(const char *big, const char *little, size_t len)

{
       size_t i;
       size_t j;
       size_t empty;

       i = 0;
       empty = ft_strlen(little);
       if (empty == 0)
              return((char *)big);
       while(big[i])
       {
              if (!ft_strchr(big, little[0]))
                     return(NULL);
              else
              {
                     j = (size_t)ft_strchr(big, little[0]);
                     while (little[i] < len)
                     {
                         if (!ft_charcmp(little[i], big[j]))
                                ft_charcmp(little[i + 1], big[j + 1]);
                        else
                            return (NULL);
                     }
                     
                return ((char *)empty);
               }
       }   
}
