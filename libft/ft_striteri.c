/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:14:14 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:14:16 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Applies the function f to each character of the string passed as argument,
**and passing its index as first argument. Each character is passed by address
**to f to be modified if necessary
*/

#include <stdlib.h>
#include <string.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	else
	{
		while (*s != '\0')
		{
			(*f)(i, s);
			i++;
			s++;
		}
	}
}
