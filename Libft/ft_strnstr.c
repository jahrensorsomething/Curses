/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:35:54 by jahrens           #+#    #+#             */
/*   Updated: 2022/02/21 13:04:37 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0' && a < len)
	{
		if (haystack[a] == needle[b])
		{
			while (haystack[a + b] == needle[b] && a + b < len)
			{
				if (needle[b + 1] == '\0')
					return ((char *)haystack + a);
				b++;
			}
			b = 0;
		}
		a++;
	}
	return (NULL);
}
