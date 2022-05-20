/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:29:00 by jahrens           #+#    #+#             */
/*   Updated: 2022/02/17 15:17:39 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	if (n == 0)
		return (0);
	while (s1[a] == s2[a])
	{
		if ((s1[a] == '\0' && s2[a] == '\0') || a == (n -1))
			return (0);
		a++;
	}
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
