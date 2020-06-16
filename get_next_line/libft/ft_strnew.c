/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:09:55 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:09:57 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**n Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’.
**Each character of the string is initialized at ’\0’. If the allocation fails
**the function returns NULL.
**
**Return value The string allocated and initialized to 0
*/

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	char	*p;

	if (size == (size_t)-1)
		return (NULL);
	if (!(str = (char*)malloc((size + 1) * sizeof(char))))
		return (NULL);
	p = str;
	while (size)
	{
		*p++ = '\0';
		size--;
	}
	*p = '\0';
	return (str);
}
