/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:38:32 by jahrens           #+#    #+#             */
/*   Updated: 2022/01/25 14:25:33 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	a;
	int	neg;
	int	res;

	a = 0;
	neg = 1;
	res = 0;
	while (str[a] == ' ' || (str[a] >= 9 && str[a] <= 13))
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			neg *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		res = (str[a] - '0') + (res * 10);
		a++;
	}
	return (res * neg);
}
