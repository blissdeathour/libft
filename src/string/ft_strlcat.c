/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:09:17 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*p_dst;
	const char	*p_src;
	size_t		i;
	size_t		l_dst;

	p_dst = dst;
	p_src = src;
	i = dstsize;
	while (i-- && *p_dst)
		++p_dst;
	l_dst = p_dst - dst;
	if ((i = dstsize - l_dst) > 0)
	{
		while (*p_src && i-- > 1)
			*p_dst++ = *p_src++;
		*p_dst = 0;
	}
	while (*p_src)
		++p_src;
	return (l_dst + (p_src - src));
}
