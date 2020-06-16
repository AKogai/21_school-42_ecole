/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fields.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 10:20:23 by cchieko           #+#    #+#             */
/*   Updated: 2019/08/20 18:50:51 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		round_up_sq_rt(int num)
{
	int field_size;

	field_size = 2;
	while (field_size * field_size < num)
		field_size++;
	return (field_size);
}

t_field	*new_field(int field_size)
{
	t_field	*field;
	int		i;

	field = (t_field *)ft_memalloc(sizeof(t_field));
	field->array = (char **)ft_memalloc(sizeof(char *) * field_size);
	i = 0;
	while (i < field_size)
	{
		field->array[i] = ft_strnew(field_size);
		ft_memset(field->array[i], '.', field_size);
		i++;
	}
	return (field);
}

size_t	count_blockset(t_block *blockset)
{
	size_t	count;

	count = 0;
	while (blockset)
	{
		blockset = blockset->next;
		count++;
	}
	return (count);
}

void	print_field(t_field *field, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putstr(field->array[i]);
		ft_putchar('\n');
		i++;
	}
}

void	free_field(t_field *field, int field_size)
{
	int	i;

	i = 0;
	while (i < field_size)
	{
		ft_memdel((void **)&(field->array[i]));
		i++;
	}
	ft_memdel((void **)&(field->array));
	ft_memdel((void **)&field);
}
