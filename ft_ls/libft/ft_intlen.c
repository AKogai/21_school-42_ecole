/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 17:17:27 by cchieko           #+#    #+#             */
/*   Updated: 2019/12/21 17:20:04 by cchieko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int number)
{
	int i;

	if (number == 0)
		return (1);
	i = 0;
	while (number != 0)
	{
		number /= 10;
		i++;
	}
	return (i);
}
