/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:43:07 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:43:09 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Outputs the string s to the file descriptor fd followed by a ’\n’.
*/

#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
	{
		while (*s)
			if (write(fd, s++, 1) == -1)
				return ;
		if (write(fd, "\n", 1) == -1)
			return ;
	}
}
