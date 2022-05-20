/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:27:27 by jahrens           #+#    #+#             */
/*   Updated: 2022/02/21 13:42:49 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = ft_strlen(s);
	if (c == 0)
		return ((char *)s + a);
	while (a >= 0)
	{
		if (s[a] == c)
			return ((char *)s + a);
		a--;
	}
	return (NULL);
}
