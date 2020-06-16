/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 10:20:47 by cchieko           #+#    #+#             */
/*   Updated: 2019/08/20 20:01:22 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		overlap(t_field *field, t_block *piece)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = 0;
	y = 0;
	x = piece->coordinates[i] + piece->move_x;
	y = piece->coordinates[i + 1] + piece->move_y;
	while (i <= 6 && field->array[y][x] == '.')
	{
		i += 2;
		x = piece->coordinates[i] + piece->move_x;
		y = piece->coordinates[i + 1] + piece->move_y;
	}
	return (i != 8);
}

void	field_filler(t_block *piece, t_field *field, char symbol)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = 0;
	y = 0;
	while (i <= 6)
	{
		x = piece->coordinates[i] + piece->move_x;
		y = piece->coordinates[i + 1] + piece->move_y;
		field->array[y][x] = symbol;
		i += 2;
	}
}

int		in_bounds(t_block *piece, int field_size, char axis)
{
	if (axis == 'y')
		return (piece->coordinates[1] + piece->move_y < field_size &&
				piece->coordinates[3] + piece->move_y < field_size &&
				piece->coordinates[5] + piece->move_y < field_size &&
				piece->coordinates[7] + piece->move_y < field_size);
	else
		return (piece->coordinates[0] + piece->move_x < field_size &&
				piece->coordinates[2] + piece->move_x < field_size &&
				piece->coordinates[4] + piece->move_x < field_size &&
				piece->coordinates[6] + piece->move_x < field_size);
}

int		convert_field(t_field *field, t_block *piece, int field_size)
{
	if (!piece)
		return (1);
	piece->move_x = 0;
	piece->move_y = 0;
	while (in_bounds(piece, field_size, 'y'))
	{
		while (in_bounds(piece, field_size, 'x'))
		{
			if (!overlap(field, piece))
			{
				field_filler(piece, field, piece->symbol);
				if (convert_field(field, piece->next, field_size))
					return (1);
				else
				{
					field_filler(piece, field, '.');
				}
			}
			piece->move_x++;
		}
		piece->move_x = 0;
		piece->move_y++;
	}
	return (0);
}

void	convert(t_block *blockset)
{
	t_field	*field;
	int		field_size;

	field_size = round_up_sq_rt(count_blockset(blockset) * 4);
	field = new_field(field_size);
	while (!convert_field(field, blockset, field_size))
	{
		free_field(field, field_size);
		field_size++;
		field = new_field(field_size);
	}
	print_field(field, field_size);
	free_field(field, field_size);
}
