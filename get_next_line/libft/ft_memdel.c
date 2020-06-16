/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:08:52 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/19 19:08:55 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Takes as a parameter the address of a memory area that needs
**to be freed with free(3), then puts the pointer to NULL.
*/
#include <stdlib.h>

void	ft_memdel(void **ap)
{
	if (!ap || !*ap)
		return ;
	else
	{
		free(*ap);
		*ap = NULL;
	}
}
