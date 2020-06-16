/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:30:48 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:30:51 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Outputs the character c to the standard output.
*/

#include <unistd.h>

void		ft_putchar(char c)
{
	unsigned char ch;
	unsigned char u[2];

	ch = (unsigned char)c;
	if (ch < 128)
		write(1, &c, 1);
	else
	{
		u[0] = 192 | (ch >> 6);
		u[1] = 128 | (63 & ch);
		write(1, u, 2);
	}
}
