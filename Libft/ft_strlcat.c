/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:12:48 by jahrens           #+#    #+#             */
/*   Updated: 2022/02/21 13:03:41 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (dst[a] && a < dstsize)
		a++;
	while (src[b] && (a + b + 1) < dstsize)
	{
		dst[a + b] = src[b];
		b++;
	}
	if (a < dstsize)
		dst[a + b] = '\0';
	return (a + ft_strlen(src));
}
