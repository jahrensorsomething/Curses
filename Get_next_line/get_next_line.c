/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:09:20 by jahrens           #+#    #+#             */
/*   Updated: 2022/08/24 11:46:40 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	char	*read_and_extract(int fd, char *buffer, char *leftover)
{
	int		bytes_read;
	char	*holder;

	bytes_read = 1;
	while (bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (0);
		else if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		if (!leftover)
			leftover = ft_strdup("");
		holder = leftover;
		leftover = ft_strjoin(holder, buffer);
		free(holder);
		holder = NULL;
		if (ft_strchr (buffer, '\n'))
			break ;
	}
	return (leftover);
}

static	char	*find_new_line(char *line)
{
	size_t	i;
	char	*leftover;

		i = 0;
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	if (line[i] == '\0' || line[1] == '\0')
		return (0);
	leftover = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (*leftover == '\0')
	{
		free(leftover);
		leftover = NULL;
	}
	line[i + 1] = '\0';
	return (leftover);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buffer;
	static char	*leftover;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (0);
	line = read_and_extract(fd, buffer, leftover);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (NULL);
	leftover = find_new_line(line);
	return (line);
}
