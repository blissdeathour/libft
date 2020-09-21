/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_buf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 02:12:58 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_pfbuffer.h"

ssize_t		ft_putstr_buf(t_buf *buf, const char *str)
{
	ssize_t	res;

	res = 0;
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
