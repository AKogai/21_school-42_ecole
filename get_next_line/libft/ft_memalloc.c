/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:06:04 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:06:09 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Allocates (with malloc(3)) and returns a “fresh” memory area. The memory
**allocated is initialized to 0. If the alloca- tion fails, the function returns
**NULL.
**
**Return value The allocated memory area.
*/

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void	*str;
	size_t	i;

	i = 0;
	str = NULL;
	if (!(str = ((void *)malloc(size))))
		return (NULL);
	while (i < size)
	{
		((unsigned char *)str)[i] = 0;
		i++;
	}
	return (str);
}
