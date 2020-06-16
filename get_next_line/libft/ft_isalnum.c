/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:52:26 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 18:52:29 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The isalnum() function tests for any character for which isalpha(3) or
**isdigit(3) is true.  The value of the argument must be representable as an
**unsigned char or the value of EOF.
**
**Return value The isalnum() function returns zero if the character tests false
**and returns non-zero if the character tests true.
*/

int		ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' &&
				c <= 'z'));
}
