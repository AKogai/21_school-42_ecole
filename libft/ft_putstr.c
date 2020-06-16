/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:31:36 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:31:38 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Outputs the string s to the standard output.
*/

#include <unistd.h>
#include <string.h>

void	ft_putstr(char const *s)
{
	size_t i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}
