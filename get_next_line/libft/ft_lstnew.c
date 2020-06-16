/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijanie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 13:36:55 by ijanie            #+#    #+#             */
/*   Updated: 2019/04/20 13:36:59 by ijanie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Allocates (with malloc(3)) and returns a “fresh” link. The variables content
**and content_size of the new link are ini- tialized by copy of the parameters
**of the function. If the pa- rameter content is nul, the variable content is
**initialized to NULL and the variable content_size is initialized to 0 even if
**the parameter content_size isn’t. The variable next is initialized to NULL.
**If the allocation fails, the function returns NULL.
**
**Return value The new link.
*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new_link;

	if (!(new_link = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content || !content_size)
	{
		new_link->content = NULL;
		new_link->content_size = 0;
	}
	else
	{
		new_link->content = ft_memalloc(content_size);
		new_link->content = ft_memcpy(new_link->content, content, content_size);
		new_link->content_size = content_size;
	}
	new_link->next = NULL;
	return (new_link);
}
