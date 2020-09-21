/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 02:19:28 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:06 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dlist.h"

void	ft_dlstadd(t_dlist **alst, t_dlist *new)
{
	t_dlist	*tmp;

	if (alst && new)
	{
		tmp = *alst;
		*alst = new;
		new->next = tmp;
		tmp->prev = new;
	}
}
