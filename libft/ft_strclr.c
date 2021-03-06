/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:12:29 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:12:31 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Sets every character of the string to the value ’\0’.
*/

#include <stdlib.h>

void	ft_strclr(char *s)
{
	if (!s)
		return ;
	else
	{
		while (*s)
			*s++ = '\0';
	}
}
