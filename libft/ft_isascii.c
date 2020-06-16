/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:55:06 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 18:55:09 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The isascii() function tests for an ASCII character, which is any character
**between 0 and octal 0177 inclusive.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
