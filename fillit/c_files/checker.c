/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 10:21:02 by cchieko           #+#    #+#             */
/*   Updated: 2019/08/20 18:15:40 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	free_blockset(t_block *blockset)
{
	t_block *tmp;

	while (blockset)
	{
		tmp = blockset;
		blockset = blockset->next;
		free(tmp);
	}
}

t_block	*align(t_block *block)
{
	while (block->coordinates[0] != 0 && \
			block->coordinates[2] != 0 && \
			block->coordinates[4] != 0 && \
			block->coordinates[6] != 0)
		x_axis_shift(block, -1);
	while (block->coordinates[1] != 0 && \
			block->coordinates[3] != 0 && \
			block->coordinates[5] != 0 && \
			block->coordinates[7] != 0)
		y_axis_shift(block, -1);
	return (block);
}

t_block	*make_block(const char *buf, char letter)
{
	t_block *block;
	int		x;
	int		y;
	int		i;

	x = 0;
	y = 1;
	i = 0;
	if (!(block = (t_block *)malloc(sizeof(t_block))))
		return (NULL);
	while (i < 20)
	{
		if (buf[i] == '#')
		{
			block->coordinates[x] = (i >= 5) ? (i % 5) : i;
			block->coordinates[y] = i / 5;
			x += 2;
			y += 2;
		}
		i++;
	}
	block->move_x = 0;
	block->move_y = 0;
	block->symbol = letter;
	return (align(block));
}

t_block	*make_blockset(const char *buf, int size)
{
	t_block *current;
	t_block *beginning;
	int		i;
	char	letter;

	i = 0;
	letter = 'A';
	while (i < size)
	{
		if (letter == 'A')
		{
			beginning = make_block(buf + i, letter);
			current = beginning;
		}
		else
		{
			current->next = make_block(buf + i, letter);
			current = current->next;
		}
		letter++;
		i += 21;
	}
	current->next = NULL;
	return (beginning);
}

t_block	*check_file(char *filename)
{
	char	buf[545];
	int		fd;
	int		bytecount;

	fd = open(filename, O_RDONLY);
	bytecount = read(fd, buf, 545);
	close(fd);
	if (bytecount > 544 || bytecount < 19)
		return (NULL);
	buf[bytecount] = '\0';
	if (!valid(buf, bytecount))
		return (NULL);
	return (make_blockset(buf, bytecount));
}
