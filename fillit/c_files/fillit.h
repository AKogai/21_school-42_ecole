/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 10:19:17 by cchieko           #+#    #+#             */
/*   Updated: 2019/08/20 20:18:39 by cchieko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_FILLIT_H
# define FILLIT_FILLIT_H

# include <unistd.h>
# include <fcntl.h>
# include "../libft/libft.h"

typedef	struct	s_block
{
	int				coordinates[8];
	char			symbol;
	int				move_x;
	int				move_y;
	struct s_block	*next;
}				t_block;

typedef	struct	s_field
{
	char			**array;
}				t_field;

int				in_bounds(t_block *block, int field_size, char axis);
int				overlap(t_field *field, t_block *block);
int				convert_field(t_field *field, t_block *blockset,
				int field_size);
void			field_filler(t_block *block, t_field *field, char symbol);
size_t			count_blockset(t_block *blockset);
void			print_field(t_field *field, int size);
int				round_up_sq_rt(int num);
t_field			*new_field(int size);
void			convert(t_block *blockset);
t_block			*check_file(char *filename);
t_block			*make_block(const char *buf, char letter);
t_block			*make_blockset(const char *buf, int size);
t_block			*align(t_block *block);
void			x_axis_shift(t_block *block, int x);
void			y_axis_shift(t_block *block, int y);
int				valid(const char *buf, int size);
int				charcount(const char *buf);
int				neighbor_count(const char *buf);
void			free_blockset(t_block *list);
void			free_field(t_field *field, int field_size);

#endif
