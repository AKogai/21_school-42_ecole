/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 08:09:05 by cchieko           #+#    #+#             */
/*   Updated: 2019/04/27 13:58:47 by cchieko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		word;
	int		flag;

	word = 0;
	flag = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (flag == 1 && *s == c)
			flag = 0;
		if (flag == 0 && *s != c)
		{
			flag = 1;
			word++;
		}
		s++;
	}
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		words;
	int		start;
	int		i;
	int		j;

	if (s == NULL || !c)
		return (NULL);
	words = count_words(s, c);
	if (!(arr = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	i = 0;
	j = -1;
	while (++j < words)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		arr[j] = ft_strsub(s, start, i - start);
		i++;
	}
	arr[j] = NULL;
	return (arr);
}
