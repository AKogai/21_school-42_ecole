/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   console.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 16:30:19 by cchieko           #+#    #+#             */
/*   Updated: 2019/12/21 16:30:24 by cchieko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	print_content_with_format(t_list *dnode, int format,
		t_column_width *cwidths, char *flags)
{
	t_list *node;

	if (!format)
	{
		node = ((t_dnode*)(dnode->content))->f_list;
		while (node)
		{
			if (flags && flags[10] == 'G')
				set_output_color(((t_file_stats*)(node->content))->file_type);
			ft_putendl(((t_file_stats*)(node->content))->name);
			node = node->next;
		}
		if (flags && flags[10] == 'G')
			set_output_color('X');
	}
	else
	{
		print_total(((t_dnode*)(dnode->content))->f_list);
		fill_c_widths(((t_dnode*)(dnode->content))->f_list, cwidths);
		print_formatted_list(((t_dnode*)(dnode->content))->f_list,
				cwidths, flags);
	}
}

void	print_dir_content(t_list *dir_list, int format, int with_title,
		char *flags)
{
	t_list			*dnode;
	t_column_width	cwidths;

	dnode = dir_list;
	while (dnode)
	{
		if (with_title)
		{
			if (dnode != dir_list)
				ft_putendl("");
			ft_putstr((((t_dnode*)(dnode->content))->dir_stats)->path);
			ft_putendl(":");
		}
		if ((((t_dnode*)(dnode->content))->dir_stats)->permissions[1] == '-')
		{
			set_errno_to_nopermission((((t_dnode*)(dnode->content))->
					dir_stats)->path);
			ft_perror((((t_dnode*)(dnode->content))->dir_stats)->name);
		}
		print_content_with_format(dnode, format, &cwidths, flags);
		dnode = dnode->next;
	}
}

void	print_single_column(t_wlists *wlists, char *flags)
{
	t_list	*node;
	int		unique_dir;

	print_nonexistent(wlists->nonexistent_list);
	node = wlists->file_list;
	while (node)
	{
		if (flags && flags[10] == 'G')
			set_output_color(((t_file_stats*)(node->content))->file_type);
		ft_putendl(((t_file_stats*)(node->content))->name);
		node = node->next;
	}
	if (flags && flags[10] == 'G')
		set_output_color('X');
	if (wlists->file_list && wlists->dir_list)
		ft_putendl("");
	unique_dir = ft_lstlen(wlists->file_list) == 0 &&
			ft_lstlen(wlists->dir_list) == 1 &&
			ft_lstlen(wlists->nonexistent_list) == 0;
	print_dir_content(wlists->dir_list, 0, !unique_dir, flags);
}

void	print_long_format(t_wlists *wlists, char *flags)
{
	t_column_width	cwidths;
	int				unique_dir;

	print_nonexistent(wlists->nonexistent_list);
	if (wlists->file_list)
	{
		fill_c_widths(wlists->file_list, &cwidths);
		print_formatted_list(wlists->file_list, &cwidths, flags);
		if (wlists->dir_list)
			ft_putendl("");
	}
	unique_dir = ft_lstlen(wlists->file_list) == 0 &&
			ft_lstlen(wlists->dir_list) == 1 &&
			ft_lstlen(wlists->nonexistent_list) == 0;
	print_dir_content(wlists->dir_list, 1, !unique_dir, flags);
}

void	print_stats(t_wlists *wlists, char *flags)
{
	if (flags && (flags[2] == 'l' || flags[5] == 'g' || flags[6] == 'o'))
		print_long_format(wlists, flags);
	else if ((flags && flags[7] == '1') || !isatty(1))
		print_single_column(wlists, flags);
	else
		print_multi_column(wlists, flags);
}
