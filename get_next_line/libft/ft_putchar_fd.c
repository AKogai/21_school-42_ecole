/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:40:01 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:40:04 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Outputs the char c to the file descriptor fd
*/

#include <unistd.h>

void	ft_putchar_fd(char const c, int fd)
{
	unsigned char ch;
	unsigned char u[2];

	ch = (unsigned char)c;
	if (ch < 128)
		write(fd, &c, 1);
	else
	{
		u[0] = 192 | (ch >> 6);
		u[1] = 128 | (63 & ch);
		write(fd, u, 2);
	}
}
