/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_or_dir_input.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 14:17:47 by cchieko           #+#    #+#             */
/*   Updated: 2019/12/21 14:17:51 by cchieko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	add_files_from_argv(char ***file_list, char **flags, char **argv,
		int argc)
{
	int i;
	int j;

	i = 1;
	while (i < argc && argv[i][0] == '-')
		i++;
	if (i < argc && !(*file_list = (char**)malloc(sizeof(char*) *
			(argc - i) + 1)))
		crush_and_error(ERROR_MSG, file_list, flags);
	j = 0;
	while (i < argc)
	{
		if (!((*file_list)[j] = ft_strnew(ft_strlen(argv[i]))))
			crush_and_error(ERROR_MSG, file_list, flags);
		(*file_list)[j] = ft_strcpy((*file_list)[j], argv[i]);
		i++;
		j++;
	}
	(*file_list)[j] = NULL;
}

int		add_current_dir(char ***file_list)
{
	if (!(*file_list = (char**)malloc(sizeof(char*) * 2)))
	{
		crush_and_error(ERROR_MSG, NULL, NULL);
		return (-1);
	}
	if (!((*file_list)[0] = ft_strnew(1)))
	{
		crush_and_error(ERROR_MSG, NULL, NULL);
		return (-1);
	}
	(*file_list)[0][0] = '.';
	(*file_list)[1] = NULL;
	return (0);
}
