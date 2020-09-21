/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 02:20:55 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:06 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dlist.h"

void	ft_dlstiter_b(t_dlist *lst, void (*f)(t_dlist *elem))
{
	t_dlist	*prev;

	while (lst)
	{
		prev = lst->prev;
		f(lst);
		lst = prev;
	}
}

void	ft_dlstiter_f(t_dlist *lst, void (*f)(t_dlist *elem))
{
	t_dlist	*next;

	while (lst)
	{
		next = lst->next;
		f(lst);
		lst = next;
	}
}
