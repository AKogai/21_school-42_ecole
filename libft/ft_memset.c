/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:06:57 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 17:07:08 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The memset() function writes len bytes of value c (converted to an unsigned
**char) to the string b.
**
**Return value The memset() function returns its first argument.
*/

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*uc;

	if (len == 0)
		return (b);
	uc = (unsigned char *)b;
	while (len--)
	{
		*uc = (unsigned char)c;
		if (len)
			uc++;
	}
	return (b);
}
