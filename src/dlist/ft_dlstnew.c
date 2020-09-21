/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 02:08:40 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dlist.h"
#include "libft_memory.h"
#include <stddef.h>

t_dlist	*ft_dlstnew(void const *content, size_t content_size)
{
	t_dlist	*new;

	if (!(new = (t_dlist *)ft_memalloc(sizeof(t_dlist))))
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if (!(new->content = (void *)ft_memalloc(content_size)))
		{
			ft_memdel((void **)&new);
			return (NULL);
		}
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	return (new);
}
