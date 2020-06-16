/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:20:09 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:20:11 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicographical comparison between s1 and s2 up to n characters or until a
**’\0’ is reached. If the 2 strings are identical, the function returns 1, or
**0 otherwise.
**
**Return value 1 or 0 according to if the 2 strings are identical or not.
*/

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	else
	{
		while (i < n)
		{
			if (s1[i] == '\0' && s2[i] == '\0')
				break ;
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
		return (1);
	}
}
