/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:29:45 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:29:49 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
**representing the integer n given as argument. Negative numbers must be
**supported. If the allocation fails, the function returns NULL.
**
**Return value  The string representing the integer passed as argument
*/

#include <stdlib.h>
#include <string.h>

static int		get_nb_size(unsigned int nb)
{
	size_t	size;

	size = 0;
	while (nb >= 10)
	{
		nb /= 10;
		++size;
	}
	return (size + 1);
}

char			*ft_itoa(int nbr)
{
	char			*str;
	unsigned int	nb;
	unsigned int	index;
	unsigned int	size;

	if (nbr < 0)
		nb = (unsigned int)(nbr * -1);
	else
		nb = (unsigned int)nbr;
	size = (unsigned int)get_nb_size(nb);
	index = 0;
	if (!(str = (char*)malloc(sizeof(char) * (size + 1 + (nbr < 0 ? 1 : 0)))))
		return (0);
	if (nbr < 0 && (str[index] = '-'))
		size++;
	index = size - 1;
	while (nb >= 10)
	{
		str[index--] = (char)(nb % 10 + 48);
		nb /= 10;
	}
	str[index] = (char)(nb % 10 + 48);
	str[size] = '\0';
	return (str);
}
