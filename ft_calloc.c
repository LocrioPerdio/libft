/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:21:24 by paduarte          #+#    #+#             */
/*   Updated: 2026/04/21 18:22:29 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
		The calloc() function allocates memory for an array of nmemb elements
		of size bytes each and returns a pointer to the allocated  mem‐
		ory.   The memory is set to zero.  If nmemb or size is 0,
			then calloc() returns either NULL,
			or a unique pointer value that can later
		be successfully passed to free().  If the multiplication of nmemb
		and size would result in integer overflow, then calloc() returns an
		error.  By contrast,an integer overflow would not be detected in the
		following call to malloc(),	with the result that an incorrectly
		sized block of memory would be allocated:

			malloc(nmemb * size);

RETURN VALUE
		The malloc() and calloc() functions return a pointer to the allocated
		memory,	which is suitably aligned for any  built-in  type.  On
		error,these functions return NULL.  NULL may also be returned by
		a successful call to  malloc() with a size of zero,
			or by a successful call to calloc() with nmemb or size equal to zero.
*/
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*ptr;

	if ((size != 0 && nmemb > SIZE_MAX / size))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (size * nmemb));
	return ((void *)ptr);
}
