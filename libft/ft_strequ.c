/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:19:05 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:19:11 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Lexicographical comparison between s1 and s2. If the 2 strings are identical
**the function returns 1, or 0 otherwise.
**
**Return value 1 or 0 according to if the 2 strings are identical or not
*/

#include <string.h>

int		ft_strequ(char const *s1, char const *s2)
{
	size_t		i;

	if (s1 && s2)
	{
		i = 0;
		while (s1[i] != 0)
		{
			i++;
			if (s1[i] != s2[i])
				return (0);
		}
		return (1);
	}
	return (0);
}
