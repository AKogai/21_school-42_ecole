/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:44:27 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 18:44:31 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The atoi() function converts the initial portion of the string pointed to by
**str to int representation.
*/

#include <string.h>

static	int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int			ft_atoi(const char *str)
{
	long long		sign;
	unsigned long	nbr;

	sign = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r' ||
			*str == '\t' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	nbr = 0;
	while (ft_isdigit((int)*str))
	{
		nbr = nbr * 10 + *str - '0';
		if (nbr >= 9223372036854775807 && sign == 1)
			return (-1);
		else if (nbr > 9223372036854775807 && sign == -1)
			return (0);
		str++;
	}
	return (sign * nbr);
}
