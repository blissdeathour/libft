/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_sorted.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 16:54:28 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

void			ft_lstadd_sorted(t_list **alst, t_list *new,
				int (*cmp)(t_list *cur, t_list *new))
{
	t_list	*ptr;
	t_list	*tmp;

	if (!*alst || cmp(*alst, new))
	{
		ft_lstadd(alst, new);
		return ;
	}
	ptr = *alst;
	while (ptr->next)
	{
		if (cmp(ptr->next, new))
		{
			tmp = ptr->next;
			ptr->next = new;
			new->next = tmp;
			return ;
		}
	}
	ptr->next = new;
}
