/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:20:46 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 18:20:55 by ijanie           ###   ########.fr       */
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

static	size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char			*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen((char *)s);
	while (len != 0 && s[len] != (char)c)
		len--;
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	return (NULL);
}
