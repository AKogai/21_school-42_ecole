/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:16:40 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:16:44 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Applies the function f to each character of the string passed as argument
**by giving its index as first argument to create a “fresh” new string (with
**malloc(3)) resulting from the successive applications of f.
**
**Return value The “fresh” string created from the successive applications of
**f
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

char			*ft_strmapi(char const *s, char (*f)(unsigned in, char))
{
	size_t	i;
	char	*dst;

	if (s == NULL || f == NULL)
		return (NULL);
	if (!(dst = (char*)malloc(sizeof(char) * (ft_strlen((char *)s) + 1))))
		return (NULL);
	i = -1;
	while (s[++i])
	{
		dst[i] = f(i, s[i]);
	}
	dst[i] = '\0';
	return (dst);
}
