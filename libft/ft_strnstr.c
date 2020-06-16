/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:28:35 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 18:28:38 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The strnstr() function locates the first occurrence of the null-terminated
**string needle in the string haystack, where not more than len characters are
**searched.  Characters that appear after a `\0' character are not searched.
**Since the strnstr() function is a FreeBSD specific API, it should only be used
**when portability is not a concern.
**
**Return value If needle is an empty string, haystack is returned; if needle
**occurs nowhere in haystack, NULL is returned; otherwise a pointer to the
**first character of the first occurrence of needle is returned.
*/

#include "string.h"

char	*ft_strnstr(const char *haystack, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	if (n[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (n[j] != '\0')
		{
			if (i + j >= len || haystack[i + j] != n[j])
				break ;
			j++;
		}
		if (n[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
