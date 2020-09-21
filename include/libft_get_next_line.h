/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_get_next_line.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 23:50:29 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:06 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_GET_NEXT_LINE_H
# define LIBFT_GET_NEXT_LINE_H

# include <stddef.h>

# ifndef BUFF_SIZE
#  define BUFF_SIZE 256
# endif

# ifndef E_RCODE
#  define E_RCODE

enum
{
	ERR = -1,
	OK = 1,
	END = 0
};
# endif

void	gnl_strdel(void *content, size_t size);
void	gnl_fddel(void *content, size_t size);
int		get_next_line(const int fd, char **line);

#endif
