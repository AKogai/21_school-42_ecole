/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:41:37 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:41:52 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Outputs the string s to the file descriptor fd.
*/

#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
	{
		while (*s)
			if (write(fd, s++, 1) == -1)
				return ;
	}
}
