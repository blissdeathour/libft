/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 11:43:42 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_memory.h"
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*p_dst;
	const char	*p_src;

	if (len == 0 || src == dst)
		return (dst);
	else if (src > dst || (size_t)((char *)dst - (const char *)src) >= len)
		return (ft_memcpy(dst, src, len));
	else
	{
		p_dst = (char *)dst;
		p_src = (const char *)src;
		i = len;
		while (--i > 0)
			p_dst[i] = p_src[i];
		p_dst[0] = p_src[0];
		return (dst);
	}
}
