/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:16:39 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 18:16:46 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The strchr() function locates the first occurrence of c (converted to a char)
**in the string pointed to by s. The terminating null character is considered
**to be part of the string; therefore if c is `\0', the functions locate the
**terminating `\0'.
**
**Return value The functions strchr() and strrchr() return a pointer to the
**located character, or NULL if the character does not appear in the string.
*/

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str++ == '\0')
			return (NULL);
	}
	return (str);
}
