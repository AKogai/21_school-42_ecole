/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:46:53 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 18:46:57 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The isalpha() function tests for any character for which isupper(3) or
**islower(3) is true.  The value of the argument must be representable as an
**unsigned char or the value of EOF.
**
**Return value The isalpha() function returns zero if the character tests false
**and returns non-zero if the character tests true.
*/

int		ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
