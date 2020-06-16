/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:51:43 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 17:51:48 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The strdup() function allocates sufficient memory for a copy of the string s1,
**does the copy, and returns a pointer to it.  The pointer may subsequently be
**used as an argument to the function free(3).
**If insufficient memory is available, NULL is returned and errno is set to
**ENOMEM.
*/

#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	size_t		i;
	size_t		len;
	char		*str;

	len = 0;
	while (s1[len])
		len++;
	if (!(str = (char*)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}
