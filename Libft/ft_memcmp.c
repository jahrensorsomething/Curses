/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:33:27 by jahrens           #+#    #+#             */
/*   Updated: 2022/02/17 15:00:41 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*a;
	char	*b;
	size_t	z;

	z = 0;
	a = (char *)s1;
	b = (char *)s2;
	while (z < n)
	{
		if (a[z] != b[z])
			return ((unsigned char)a[z] - (unsigned char)b[z]);
		z++;
	}
	return (0);
}
