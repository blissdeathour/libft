/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quenew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 18:01:35 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_queue.h"
#include "libft_list.h"
#include "libft_memory.h"

t_queue	*ft_quenew(void const *content, size_t content_size)
{
	t_queue	*queue;

	if (!(queue = ft_memalloc(sizeof(t_queue))))
		return (NULL);
	queue->head = (content ?
	ft_lstnew(content, content_size) : ft_lstnew_ic(content_size));
	queue->tail = queue->head;
	return (queue);
}
