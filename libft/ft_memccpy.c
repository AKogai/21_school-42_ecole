/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:25:41 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 17:25:44 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The memccpy() function copies bytes from string src to string dst.  If the
**character c (as converted to an unsigned char) occurs in the string src, the
**copy stops and a pointer to the byte after the copy of c in the string dst is
**returned.  Otherwise, n bytes are copied, and a NULL pointer is returned.
**The source and destination strings should not overlap, as the behavior is
**undefined.
*/

#include "string.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	while (i < n)
	{
		dst1[i] = src1[i];
		if (src1[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
