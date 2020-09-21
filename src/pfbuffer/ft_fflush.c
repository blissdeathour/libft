/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fflush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 02:09:49 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_pfbuffer.h"
#include "libft_memory.h"
#include <unistd.h>

ssize_t		ft_fflush(t_buf *buf)
{
	ssize_t	res;

	res = write(buf->fd, buf->body, buf->total);
	ft_bzero(buf->body, MAX_BUF);
	buf->total = 0;
	return (res);
}
