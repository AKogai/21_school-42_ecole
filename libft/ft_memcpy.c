/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:22:27 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 17:22:32 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The memcpy() function copies n bytes from memory area src to memory area dst.
**If dst and src overlap, behavior is undefined.  Applications in which dst and
**src might overlap should use memmove(3) instead.
**
**Return value The memcpy() function returns the original value of dst.
*/

#include "string.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
