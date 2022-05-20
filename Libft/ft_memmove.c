/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:01:17 by jahrens           #+#    #+#             */
/*   Updated: 2022/02/21 13:40:36 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	a;

	a = 0;
	if (src < dst)
	{
		a = len;
		while (a > 0)
		{
			a--;
			((unsigned char *)dst)[a] = ((unsigned char *)src)[a];
		}
	}
	else
	{
		a = 0;
		while (a < len)
		{
			((unsigned char *)dst)[a] = ((unsigned char *)src)[a];
			a++;
		}
	}
	return (dst);
}
