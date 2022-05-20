/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:02:27 by jahrens           #+#    #+#             */
/*   Updated: 2022/02/17 15:13:45 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;

	a = 0;
	if (dstsize == 0)
	{
		while (src[a])
			a++;
		return (a);
	}
	while (a < dstsize - 1 && src[a] != '\0')
	{
		dst[a] = src[a];
		a++;
	}
	if (a < dstsize)
		dst[a] = '\0';
	while (src[a] != '\0')
		a++;
	return (a);
}
