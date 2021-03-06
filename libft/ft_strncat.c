/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:05:27 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:05:30 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The strcat() and strncat() functions append a copy of the null-terminated
**string s2 to the end of the null-terminated string s1, then add a terminating
**`\0'. The string s1 must have sufficient space to hold the result.
**The source and destination strings should not overlap, as the behavior is
**undefined.
**
**Return value The strcat() and strncat() functions return the pointer s1.
*/

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[j])
		j++;
	while (i < n && s2[i])
	{
		s1[j] = s2[i];
		j++;
		i++;
	}
	s1[j] = '\0';
	return (s1);
}
