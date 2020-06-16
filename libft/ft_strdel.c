/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:11:25 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:11:27 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Takes as a parameter the address of a string that need to be freed with
**free(3), then sets its pointer to NULL.
*/
#include <stdlib.h>

void	ft_strdel(char **as)
{
	if (!as || !*as)
		return ;
	else
	{
		free(*as);
		*as = NULL;
	}
}
