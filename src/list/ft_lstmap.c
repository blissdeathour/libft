/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:57:37 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"
#include <stddef.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*next;
	t_list	*head;
	t_list	*ptr;

	if (!lst)
		return (NULL);
	next = lst->next;
	if (!(head = f(lst)))
		return (NULL);
	lst = next;
	ptr = head;
	while (lst && ptr)
	{
		next = lst->next;
		ptr->next = f(lst);
		ptr = ptr->next;
		lst = next;
	}
	return (head);
}
