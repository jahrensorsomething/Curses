/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:30:45 by jahrens           #+#    #+#             */
/*   Updated: 2022/02/17 14:59:42 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	a;

	a = 0;
	str = (char *)s;
	while (a < n)
	{
		if ((unsigned char)str[a] == (unsigned char)c)
			return ((char *)s + a);
		a++;
	}
	return (NULL);
}
