/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 15:17:32 by cchieko           #+#    #+#             */
/*   Updated: 2019/12/20 15:17:47 by cchieko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	main(int argc, char **argv)
{
	char **files;
	char *flags;

	files = NULL;
	if (argc == 1)
	{
		if (add_current_dir(&files) == -1)
			crush_and_error(ERROR_MSG, &files, &flags);
	}
	else
	{
		add_flags(&flags, argv);
		if (are_flags_correct(argv, argc))
		{
			if (add_current_dir(&files) == -1)
				crush_and_error(ERROR_MSG, &files, &flags);
		}
		else
			add_files_from_argv(&files, &flags, argv, argc);
	}
	main_action(&files, &flags);
	free_input(&files, &flags);
	return (0);
}
