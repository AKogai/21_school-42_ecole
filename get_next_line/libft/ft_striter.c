/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:12:44 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:12:46 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Applies the function f to each character of the string passed as argument.
**Each character is passed by address to f to be modified if necessary.
*/

#include <stdlib.h>

void	ft_striter(char *s, void (*f)(char*))
{
	if (!s || !f)
		return ;
	else
	{
		while (s != NULL && *s)
			f(s++);
	}
}
