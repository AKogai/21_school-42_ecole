/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:25:54 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:25:57 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Allocates (with malloc(3)) and returns a copy of the string given as argument
**without whitespaces at the beginning or at the end of the string. Will be
**considered as whitespaces the following characters ’ ’, ’\n’ and ’\t’. If s
**has no whitespaces at the beginning or at the end, the function returns a
**copy of s. If the allocation fails the function returns NULL.
**
**Return value The “fresh” trimmed string or a copy of s
*/

#include <string.h>
#include <stdlib.h>

static	size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*str;

	if (s == NULL)
		return (NULL);
	len = ft_strlen((char *)s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	i = -1;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		len--;
	if (len <= 0)
		len = 0;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s += i;
	i = -1;
	while (++i < len)
		str[i] = *s++;
	str[i] = '\0';
	return (str);
}
