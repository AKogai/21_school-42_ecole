/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 10:21:46 by cchieko           #+#    #+#             */
/*   Updated: 2019/08/20 20:26:21 by cchieko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		charcount(const char *buf)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < 19)
	{
		if (buf[i] && buf[i] != '\n' && buf[i] != '#' && buf[i] != '.')
			return (0);
		if (buf[i] == '\n' && ((i + 1) % 5) != 0)
			return (0);
		if (buf[i] == '#')
			count++;
		i++;
	}
	if (!buf[i] || buf[i] != '\n')
		return (0);
	return (count);
}

int		neighbor_count(const char *buf)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < 19)
	{
		if (buf[i] == '#')
		{
			if (i + 1 <= 18 && buf[i + 1] == '#')
				count++;
			if (i - 1 >= 0 && buf[i - 1] == '#')
				count++;
			if (i + 5 <= 18 && buf[i + 5] == '#')
				count++;
			if (i - 5 >= 0 && buf[i - 5] == '#')
				count++;
		}
		i++;
	}
	return (count);
}

int		valid(const char *buf, int size)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		if (charcount(buf + i) != 4)
			return (0);
		if (neighbor_count(buf + i) != 6 && neighbor_count(buf + i) != 8)
			return (0);
		i += 21;
	}
	return (1);
}
