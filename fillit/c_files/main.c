/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 10:22:03 by cchieko           #+#    #+#             */
/*   Updated: 2019/08/20 20:10:04 by cchieko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	t_block *blockset;

	if (argc != 2)
	{
		ft_putstr("usage : ./fillit source_file\n");
		return (1);
	}
	if ((blockset = check_file(argv[1])) == NULL)
	{
		ft_putstr("error\n");
		return (1);
	}
	convert(blockset);
	free_blockset(blockset);
	return (0);
}
