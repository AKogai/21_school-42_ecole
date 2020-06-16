/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_destroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 15:38:24 by cchieko           #+#    #+#             */
/*   Updated: 2019/12/23 15:38:26 by cchieko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	free_input(char ***file_list, char **flags)
{
	int i;

	i = 0;
	if (file_list && *file_list)
	{
		while ((*file_list)[i])
			free((*file_list)[i++]);
		free(*file_list);
		*file_list = NULL;
	}
	if (flags && *flags)
	{
		free(*flags);
		*flags = NULL;
	}
}
