/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:27:56 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:27:58 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Allocates (with malloc(3)) and returns an array of “fresh” strings (all
**ending with ’\0’, including the array itself) obtained by spliting s using
**the character c as a delimiter. If the allocation fails the function returns
**NULL.
**
**Return value The array of “fresh” strings result of the split
*/

#include <string.h>
#include <stdlib.h>

static	size_t		ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static	size_t		ft_count(const char *str, char c)
{
	size_t	word;
	size_t	i;

	i = 0;
	word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			word++;
		i++;
	}
	if (str[0] != '\0')
		word++;
	return (word);
}

static	char		*ft_word(const char *str, char c, size_t *i)
{
	char	*s;
	size_t	k;

	if (!(s = (char *)malloc(sizeof(s) * (ft_strlen((char *)str)))))
		return (NULL);
	k = 0;
	while (str[*i] != c && str[*i])
	{
		s[k] = str[*i];
		k++;
		*i += 1;
	}
	s[k] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (s);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		wrd;
	char		**a;

	i = 0;
	j = 0;
	wrd = ft_count(s, c);
	if (!s)
		return (NULL);
	if (!(a = (char **)malloc(sizeof(a) * (ft_count(s, c) + 2))))
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (j < wrd && s[i])
	{
		a[j] = ft_word(s, c, &i);
		j++;
	}
	a[j] = NULL;
	return (a);
}
