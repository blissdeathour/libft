/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_plus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 21:04:47 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char		*ft_strchr_plus(const char *s, int (*cmp)(int))
{
	while (*s)
	{
		if (cmp(*s))
			return ((char *)s);
		++s;
	}
	if (cmp(*s))
		return ((char *)s);
	return (NULL);
}
