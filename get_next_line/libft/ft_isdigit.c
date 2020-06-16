/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:50:21 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 18:50:24 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The isdigit() function tests for a decimal digit character.  Regardless of
**locale, this includes the following characters only:0123456789
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
