/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quepop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 18:11:52 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_queue.h"
#include <stddef.h>

t_list	*ft_quepop(t_queue *queue)
{
	t_list	*elem;

	elem = ft_lstpoptop(&(queue->head));
	if (!queue->head && queue->tail)
		queue->tail = NULL;
	return (elem);
}
