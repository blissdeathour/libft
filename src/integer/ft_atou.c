/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atou.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 15:14:43 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:06 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ctype.h"

int		ft_atou(char const *str)
{
	unsigned long long	result;

	while (ft_isspace(*str))
		++str;
	if (*str == '+')
		++str;
	result = 0;
	while (ft_isdigit(*str))
	{
		result = result * 10 + (int)*str++ - '0';
		if (result > 9223372036854775807)
			return (0);
	}
	return (result);
}
