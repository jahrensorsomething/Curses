/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:00:22 by jahrens           #+#    #+#             */
/*   Updated: 2022/02/17 15:05:07 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	z;
	char	*a;
	char	*b;

	z = 0;
	a = (char *)dst;
	b = (char *)src;
	while (z < n)
	{
		a[z] = b[z];
		z++;
	}
	return (dst);
}
