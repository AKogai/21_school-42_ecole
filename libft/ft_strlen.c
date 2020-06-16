/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:47:57 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 17:48:02 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The strlen() function computes the length of the string s.  The strnlen()
**function attempts to compute the length of s, but never scans beyond the
**first maxlen bytes of s.
**
**Return value The strlen() function returns the number of characters that
**precede the terminating NUL character. The strnlen() function returns either
**the same result as strlen() or maxlen, whichever is smaller.
*/

#include <string.h>

size_t		ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
