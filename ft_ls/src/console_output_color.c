/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   console_output_color.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 14:18:07 by cchieko           #+#    #+#             */
/*   Updated: 2019/12/23 14:18:09 by cchieko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	set_output_color(char file_type)
{
	if (file_type == 'X')
		ft_putstr(RESET);
	else if (file_type == 'l')
		ft_putstr(RED);
	else if (file_type == '-')
		ft_putstr(GRN);
	else if (file_type == 'c')
		ft_putstr(YEL);
	else if (file_type == 'b')
		ft_putstr(BLU);
	else if (file_type == 'd')
		ft_putstr(MAG);
	else if (file_type == 's')
		ft_putstr(CYN);
	else
		ft_putstr(WHT);
}
