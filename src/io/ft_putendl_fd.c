/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:09:17 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_io.h"

int	ft_putendl_fd(char const *s, int fd)
{
	int	written;

	if ((written = ft_putstr_fd(s, fd)) == EOF)
		return (EOF);
	else if (ft_putchar_fd('\n', fd) < 0)
		return (written);
	else
		return (written + 1);
}
