/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:10:06 by jahrens           #+#    #+#             */
/*   Updated: 2022/08/24 11:04:28 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	b;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		if (a >= start && b < len)
		{
			str[b] = s[a];
			b++;
		}
		a++;
	}
	str[b] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a] != c)
	{
		if (s[a] == '\0')
			return (NULL);
		a++;
	}
	return ((char *)s + a);
}

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	char	*str;

	a = 0;
	b = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[a] != '\0')
	{
		str[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		str[a + b] = s2[b];
		b++;
	}
	str[a + b] = '\0';
	return (str);
}
