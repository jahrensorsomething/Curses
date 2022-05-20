/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:05:18 by jahrens           #+#    #+#             */
/*   Updated: 2022/02/21 13:24:44 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if (('0' <= a && '9' >= a) || ('A' <= a && 'Z' >= a)
		|| ('a' <= a && 'z' >= a))
		return (1);
	return (0);
}