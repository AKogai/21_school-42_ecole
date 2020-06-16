/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shifters.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 10:21:33 by cchieko           #+#    #+#             */
/*   Updated: 2019/08/20 18:22:16 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	x_axis_shift(t_block *block, int x)
{
	block->coordinates[0] += x;
	block->coordinates[2] += x;
	block->coordinates[4] += x;
	block->coordinates[6] += x;
}

void	y_axis_shift(t_block *block, int y)
{
	block->coordinates[1] += y;
	block->coordinates[3] += y;
	block->coordinates[5] += y;
	block->coordinates[7] += y;
}
