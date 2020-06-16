/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:56:28 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 18:56:31 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The isprint() function tests for any printing character, including space
**(` ').  The value of the argument must be representable as an unsigned char
**or the value of EOF.
**
**Return value The isprint() function returns zero if the character tests false
**and returns non-zero if the character tests true.
*/

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
