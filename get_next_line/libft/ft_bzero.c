/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:20:45 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 17:20:48 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The bzero() function writes n zeroed bytes to the string s.  If n is zero,
**bzero() does nothing.
*/

#include "string.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
