/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:59:39 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 17:59:41 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The stpncpy() and strncpy() functions copy at most len characters from src
**into dst.  If src is less than len characters long, the remainder of dst is
**filled with `\0' characters.  Otherwise, dst is not terminated.
**The source and destination strings should not overlap, as the behavior is
**undefined.
**
**The stpcpy() and stpncpy() functions return a pointer to the terminating `\0'
**character of dst.  If stpncpy() does not terminate dst with a NUL character,
**it instead returns a pointer to dst[n] (which does not necessarily refer to
**a valid memory location.)
*/

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
