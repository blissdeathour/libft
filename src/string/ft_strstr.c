/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <fhilary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:09:17 by fhilary           #+#    #+#             */
/*   Updated: 2020/09/21 11:31:04 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_string.h"
#include <stddef.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t		len;

	if (!(len = ft_strlen(needle)))
		return ((char *)haystack);
	while (*haystack)
	{
		if (ft_strnequ(needle, haystack, len))
			return ((char *)haystack);
		++haystack;
	}
	return (NULL);
}
