/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpopbot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 22:48:58 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"
#include <stddef.h>

t_list	*ft_lstpopbot(t_list **lst)
{
	t_list	*ptr;
	t_list	*tmp;

	if (!lst || !(ptr = *lst))
		return (NULL);
	if (!ptr->next)
	{
		*lst = NULL;
		return (ptr);
	}
	else
	{
		while (ptr->next->next)
			ptr = ptr->next;
		tmp = ptr->next;
		ptr->next = NULL;
		return (tmp);
	}
}
