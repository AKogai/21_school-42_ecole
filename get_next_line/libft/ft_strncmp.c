/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:40:03 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 18:40:07 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The strncmp() function compares not more than n characters.  Because strncmp()
**is designed for comparing strings rather than binary data, characters that
**appear after a `\0' character are not compared.
**
**Return value The strcmp() and strncmp() functions return an integer greater
**than, equal to, or less than 0, according as the string s1 is greater than,
**equal to, or less than the string s2.  The comparison is done using unsigned
**characters, so that `\200' is greater than `\0'.
*/

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (*(s1 + i) && *(s1 + i) == *(s2 + i) && i < (n - 1))
		i++;
	if (n)
		return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
	return (0);
}
