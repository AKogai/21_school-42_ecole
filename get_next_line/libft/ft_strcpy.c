/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:54:43 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 17:54:47 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The stpcpy() and strcpy() functions copy the string src to dst (including the
**terminating `\0' character.)
**
**The strcpy() and strncpy() functions return dst.
*/

#include <string.h>

char	*ft_strcpy(char *dst, const char *src)
{
	size_t i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
