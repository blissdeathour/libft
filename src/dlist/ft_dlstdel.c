/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 02:16:57 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dlist.h"
#include <stddef.h>

void		ft_dlstdel(t_dlist **alst, void (*del)(void *, size_t))
{
	t_dlist	*ptr;
	t_dlist	*todel;

	if (!alst || !*alst)
		return ;
	ptr = (*alst)->prev;
	while (ptr)
	{
		todel = ptr;
		ptr = ptr->prev;
		ft_dlstdelone(&todel, del);
	}
	ptr = (*alst);
	while (ptr)
	{
		todel = ptr;
		ptr = ptr->next;
		ft_dlstdelone(&todel, del);
	}
	*alst = NULL;
}
