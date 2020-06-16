/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:35:22 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:35:26 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Outputs the string s to the standard output followed by a ’\n’.
*/

#include <unistd.h>

void	ft_putendl(char const *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}
