/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:46:04 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_string.h"
#include "libft_memory.h"
#include <stddef.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*new;

	len = ft_strlen(s1);
	if (!(new = ft_strnew(len)))
		return (NULL);
	return (ft_memcpy(new, s1, len));
}
