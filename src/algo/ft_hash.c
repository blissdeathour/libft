/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 15:45:13 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:06 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_algo.h"

unsigned long	ft_strhash(const void *tab, const size_t modulo)
{
	unsigned long			hash;
	unsigned				base;
	const unsigned char		*ptr;

	base = (1 << (sizeof(unsigned char) * 8));
	hash = 0;
	ptr = (const unsigned char *)tab;
	while (*ptr != '\0')
		hash = (hash * base + *ptr++) % modulo;
	return (hash);
}
