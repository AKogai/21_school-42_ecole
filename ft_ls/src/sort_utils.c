/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 16:41:14 by cchieko           #+#    #+#             */
/*   Updated: 2019/12/23 16:41:17 by cchieko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	compare_name(t_list *node1, t_list *node2, int asc, int is_dir)
{
	if (is_dir)
	{
		if ((asc && ft_strcmp(((t_dnode*)(node1->content))->dir_stats->name,
				(((t_dnode*)(node2->content))->dir_stats)->name) > 0) ||
			(!asc && ft_strcmp(((t_dnode*)(node1->content))->dir_stats->name,
					((t_dnode*)(node2->content))->dir_stats->name) < 0))
			return (0);
	}
	else
	{
		if ((asc && ft_strcmp(((t_file_stats*)(node1->content))->name,
				((t_file_stats*)(node2->content))->name) > 0) ||
			(!asc && ft_strcmp(((t_file_stats*)(node1->content))->name,
					((t_file_stats*)(node2->content))->name) < 0))
			return (0);
	}
	return (1);
}

int	compare_time(t_list *node1, t_list *node2, int asc, int is_dir)
{
	if (is_dir)
	{
		if ((((t_dnode*)(node1->content))->dir_stats)->last_modification ==
			(((t_dnode*)(node2->content))->dir_stats)->last_modification)
			return (compare_name(node1, node2, asc, is_dir));
		if ((asc &&
		((((t_dnode*)(node1->content))->dir_stats)->last_modification <
		(((t_dnode*)(node2->content))->dir_stats)->last_modification)) ||
			(!asc &&
			((((t_dnode*)(node1->content))->dir_stats)->last_modification >
			(((t_dnode*)(node2->content))->dir_stats)->last_modification)))
			return (0);
	}
	else
	{
		if (((t_file_stats*)(node1->content))->last_modification ==
			((t_file_stats*)(node2->content))->last_modification)
			return (compare_name(node1, node2, asc, is_dir));
		if ((asc && ((t_file_stats*)(node1->content))->last_modification <
					((t_file_stats*)(node2->content))->last_modification) ||
			(!asc && ((t_file_stats*)(node1->content))->last_modification >
			((t_file_stats*)(node2->content))->last_modification))
			return (0);
	}
	return (1);
}

int	compare_size(t_list *node1, t_list *node2, int asc, int is_dir)
{
	if (is_dir)
	{
		if ((((t_dnode*)(node1->content))->dir_stats)->file_size ==
			(((t_dnode*)(node2->content))->dir_stats)->file_size)
			return (compare_name(node1, node2, asc, is_dir));
		if ((asc &&
		((((t_dnode*)(node1->content))->dir_stats)->file_size <
		(((t_dnode*)(node2->content))->dir_stats)->file_size)) ||
			(!asc &&
			((((t_dnode*)(node1->content))->dir_stats)->file_size >
			(((t_dnode*)(node2->content))->dir_stats)->file_size)))
			return (0);
	}
	else
	{
		if (((t_file_stats*)(node1->content))->file_size ==
			((t_file_stats*)(node2->content))->file_size)
			return (compare_name(node1, node2, asc, is_dir));
		if ((asc && ((t_file_stats*)(node1->content))->file_size <
					((t_file_stats*)(node2->content))->file_size) ||
			(!asc && ((t_file_stats*)(node1->content))->file_size >
					((t_file_stats*)(node2->content))->file_size))
			return (0);
	}
	return (1);
}
