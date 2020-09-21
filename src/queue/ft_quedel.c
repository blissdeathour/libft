/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quedel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 18:16:42 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_queue.h"
#include "libft_list.h"
#include "libft_memory.h"
#include <stddef.h>

void	ft_quedel(t_queue **queue, void (*del)(void *, size_t))
{
	if (!queue || !*queue)
		return ;
	if (!ft_queisempty(*queue))
	{
		(*queue)->tail = NULL;
		(del ? ft_lstdel(&((*queue)->head), del) :
		ft_lstdel_ic(&((*queue)->head)));
	}
	ft_memdel((void **)queue);
}
