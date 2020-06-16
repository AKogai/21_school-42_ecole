/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:32:37 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 17:32:45 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The memmove() function copies len bytes from string src to string dst.  The
**two strings may overlap; the copy is always done in a non-destructive manner.
**
**Return value The memmove() function returns the original value of dst.
*/

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = -1;
	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	if (src1 < dst1)
		while ((int)(--len) >= 0)
			*(dst1 + len) = *(src1 + len);
	else
		while (++i < len)
			*(dst1 + i) = *(src1 + i);
	return (dst);
}
