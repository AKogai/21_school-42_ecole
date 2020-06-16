/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 13:05:06 by cchieko           #+#    #+#             */
/*   Updated: 2019/04/27 12:39:51 by cchieko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	result = (char *)malloc(sizeof(*result) *
		(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (!result)
		return (NULL);
	while (*s1 != '\0')
		result[i++] = *s1++;
	while (*s2 != '\0')
		result[i++] = *s2++;
	result[i] = '\0';
	return (result);
}
