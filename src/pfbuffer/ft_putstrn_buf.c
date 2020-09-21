/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrn_buf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 02:16:44 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_pfbuffer.h"
#include "libft_string.h"

ssize_t		ft_putstrn_buf(t_buf *buf, const char *str, size_t n)
{
	size_t	i;
	ssize_t	res;

	res = 0;
	i = 0;
	if (ft_strlen(str) > n)
		while (i < n)
		{
			buf->body[buf->total++] = str[i];
			++i;
			++res;
			if (buf->total == MAX_BUF && ft_fflush(buf) < 0)
				res = 0;
		}
	else
		while (*str)
		{
			buf->body[buf->total++] = *str;
			++str;
			++res;
			if (buf->total == MAX_BUF && ft_fflush(buf) < 0)
				res = 0;
		}
	return (res);
}
