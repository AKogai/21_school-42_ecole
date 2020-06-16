/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:23:07 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:23:09 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’,
**result of the concatenation of s1 and s2. If the allocation fails the function
**returns NULL.
**
**Return value The “fresh” string result of the concatenation of the 2 strings
*/

#include <stdlib.h>
#include <string.h>

static unsigned	int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(dst = (char*)malloc(sizeof(*dst) * (ft_strlen((char *)s1) +
		ft_strlen((char *)s2) + 1))))
		return (NULL);
	while (*s1 != '\0')
		dst[i++] = *s1++;
	while (*s2 != '\0')
		dst[i++] = *s2++;
	dst[i] = '\0';
	return (dst);
}
