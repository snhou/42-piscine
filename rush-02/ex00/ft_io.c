/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 08:51:59 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/01 21:58:18 by tischmid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int	file_readable(char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (0);
	if (close(fd) < 0)
		return (0);
	return (1);
}

/*
 * Copy to buf from file at `path' with `offset' continuously until
 * either EOF, '\n', or `size' is reached. Return new offset.
 */
int	readline(char *buf, int size, char *path, int offset)
{
	char	c;
	int		fd;
	int		bytes_read;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (FILE_READ_ERROR);
	bytes_read = -1;
	while (++bytes_read < offset)
		if (read(fd, &c, sizeof(c)) <= 0)
			return (FILE_READ_ERROR);
	bytes_read = 0;
	while (read(fd, &c, sizeof(c)) > 0 && bytes_read < size)
	{
		if (c == '\n')
			break ;
		*buf++ = c;
		++bytes_read;
	}
	if (bytes_read == size)
		return (LINE_TOO_LONG);
	*buf = 0;
	close(fd);
	return (offset + bytes_read + 1);
}
