/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_del.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 00:31:14 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_memory.h"
#include "libft_list.h"

void	gnl_strdel(void *content, size_t size)
{
	if (content && size)
		ft_memdel(&content);
}

void	gnl_fddel(void *content, size_t size)
{
	if ((int)size >= 0)
	{
		ft_memdel(&(((t_list *)content)->content));
		ft_lstdel_ic((t_list **)&content);
	}
}
