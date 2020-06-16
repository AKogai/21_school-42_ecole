/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchieko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 14:24:11 by cchieko           #+#    #+#             */
/*   Updated: 2019/12/23 14:27:58 by cchieko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstappend(t_list **alst, t_list *new)
{
	t_list	*list;

	if (alst != NULL)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			list = *alst;
			while (list->next != NULL)
				list = list->next;
			list->next = new;
		}
	}
}
