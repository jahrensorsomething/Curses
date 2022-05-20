/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:57:16 by jahrens           #+#    #+#             */
/*   Updated: 2022/02/17 14:54:20 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	a;
	void	*z;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	a = count * size;
	z = malloc(a);
	if (z == NULL)
		return (NULL);
	else
		ft_bzero(z, a);
	return (z);
}
