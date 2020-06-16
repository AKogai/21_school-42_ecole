/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:36:42 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 17:36:47 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The memchr() function locates the first occurrence of c (converted to an
**unsigned char) in string s.
**
**Return value The memchr() function returns a pointer to the byte located, or
**NULL if no such byte exists within n bytes.
*/

#include <string.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*s1;

	s1 = (unsigned char *)s;
	while (n--)
	{
		if (*s1 == (unsigned char)c)
			return (void *)s1;
		s1++;
	}
	return (NULL);
}
