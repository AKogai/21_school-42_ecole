/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 13:37:27 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/20 13:37:30 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Takes as a parameter the adress of a pointer to a link and frees the memory
**of this link and every successors of that link using the functions del and
**free(3). Finally the pointer to the link that was just freed must be set to
**NULL (quite similar to the function ft_memdel from the mandatory part).
*/

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*tmp;

	if (!alst || !del)
		return ;
	while (*alst)
	{
		tmp = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = tmp;
	}
	*alst = NULL;
	return ;
}
