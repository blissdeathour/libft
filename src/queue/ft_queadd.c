/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 18:05:00 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_queue.h"

int	ft_queadd(t_queue *queue, t_list *new)
{
	if (!new || !queue)
		return (ERR);
	if (!queue->head)
	{
		queue->head = new;
		queue->tail = queue->head;
	}
	else
	{
		queue->tail->next = new;
		queue->tail = queue->tail->next;
	}
	return (OK);
}
