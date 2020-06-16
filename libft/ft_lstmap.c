/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 13:38:07 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/20 13:38:10 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Iterates a list lst and applies the function f to each link to create a
**“fresh” list (using malloc(3)) resulting from the suc- cessive applications
**of f. If the allocation fails, the function returns NULL.
*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;
	t_list		*list;

	if (!lst)
		return (NULL);
	list = f(lst);
	new = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = f(lst)))
		{
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (new);
}
