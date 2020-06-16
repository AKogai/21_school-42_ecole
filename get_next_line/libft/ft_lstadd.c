/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 13:37:40 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/20 13:37:42 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Adds the element new at the beginning of the list.
*/

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst != NULL)
		new->next = *alst;
	*alst = new;
}
