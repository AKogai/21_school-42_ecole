/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_or_dir_validator.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 15:32:44 by cchieko           #+#    #+#             */
/*   Updated: 2019/12/23 15:32:46 by cchieko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	is_dir(char *path)
{
	struct stat file_info;

	if (lstat(path, &file_info) == 0)
		if ((file_info.st_mode & S_IFMT) == S_IFDIR)
			return (1);
	return (0);
}

int	is_hidden(char *filename)
{
	int i;

	i = (int)ft_strlen(filename) - 1;
	while (i > 0 && filename[i] != '/')
		i--;
	return (filename[i + 1] == '.');
}

int	is_nonexistent(t_list *node)
{
	return (((t_file_stats*)(node->content))->file_type == 'X');
}

int	are_flags_correct(char **argv, int argc)
{
	int i;

	if (argc <= 1)
		return (0);
	i = 1;
	while (argv[i] && argv[i][0] == '-')
		i++;
	if (i == argc)
		return (1);
	return (0);
}

int	valid_flags(const char *flags)
{
	int i;

	if (!flags || flags[1] == '\0')
		return (0);
	i = 1;
	while (flags[i] != '\0')
	{
		if (flags[i] != 'r' && flags[i] != 'a' && flags[i] != 'R' &&
			flags[i] != 'l' && flags[i] != 't' && flags[i] != 'g' &&
			flags[i] != 'o' && flags[i] != '1' && flags[i] != 'A' &&
			flags[i] != 'S' && flags[i] != 'G')
			return (0);
		i++;
	}
	return (1);
}
