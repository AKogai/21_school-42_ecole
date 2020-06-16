/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:37:06 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 18:37:14 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The strcmp() and strncmp() functions lexicographically compare the null-
**terminated strings s1 and s2.
**
**Return value The strcmp() and strncmp() functions return an integer greater
**than, equal to, or less than 0, according as the string s1 is greater than,
**equal to, or less than the string s2.  The comparison is done using unsigned
**characters, so that `\200' is greater than `\0'.
*/

#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
