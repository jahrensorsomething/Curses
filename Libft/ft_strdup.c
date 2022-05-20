/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:58:21 by jahrens           #+#    #+#             */
/*   Updated: 2022/02/21 12:56:22 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		a;
	int		b;

	a = 0;
	b = ft_strlen(s1);
	str = (char *)malloc(sizeof(*str) * (b + 1));
	while (a < b)
	{
		str[a] = s1[a];
		a++;
	}
	str[a] = '\0';
	return (str);
}
