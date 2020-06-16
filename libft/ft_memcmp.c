/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:39:10 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 17:39:22 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The memcmp() function compares byte string s1 against byte string s2.  Both
**strings are assumed to be n bytes long.
**
**Return value The memcmp() function returns zero if the two strings are
**identical, otherwise returns the difference between the first two differing
**bytes (treated as unsigned char values, so that `\200' is greater than `\0',
**for example).  Zero-length strings are always identical.  This behavior is
**not required by C and portable code should only depend on the sign of the
**returned value.
*/

#include "string.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char		*t1;
	unsigned const char		*t2;

	t1 = (unsigned const char *)s1;
	t2 = (unsigned const char *)s2;
	while (n)
	{
		if (*t1 != *t2)
			return (*t1 - *t2);
		t1++;
		t2++;
		n--;
	}
	return (0);
}
