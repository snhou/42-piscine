/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:16:06 by shou              #+#    #+#             */
/*   Updated: 2023/04/05 10:08:04 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int	ft_size_file(char *argv)
{
	int		size;
	char	buf;
	int		fd;

	size = 0;
	fd = open(argv, O_RDONLY);
	while (read(fd, &buf, 1))
	{
		size++;
	}
	close(fd);
	return (size);
}

int	ft_get_number_lines(char *argv)
{
	int		i;
	char	*buf;
	int		nb_l;
	int		fd;

	i = 0;
	nb_l = 0;
	fd = open(argv, O_RDONLY);
	buf = malloc(80 * sizeof(char));
	if (buf == NULL)
		return (0);
	while (read(fd, &buf[i], 1))
	{
		if (buf[i] > 58 || buf[i] < 47)
			break ;
		nb_l = nb_l * 10 + (buf[i] - 48);
		i++;
	}
	free (buf);
	close(fd);
	return (nb_l);
}

int	ft_get_number_columns(char *argv)
{
	char	*buf;
	int		j;
	int		size_file;
	int		fd;

	j = 0;
	fd = open(argv, O_RDONLY);
	size_file = ft_size_file(argv);
	ft_get_second_line(fd);
	buf = malloc(size_file * sizeof(char));
	if (buf == NULL)
		return (0);
	while (read(fd, &buf[j], 1))
	{
		if (buf[j] == '\n')
			break ;
		j++;
	}
	free (buf);
	close(fd);
	return (j + 1);
}

void	ft_get_second_line(int fd)
{
	int		i;
	char	*buf;

	i = 0;
	buf = malloc(4096 * sizeof(char));
	if (buf == NULL)
		return ;
	while (read(fd, &buf[i], 1))
	{
		if (buf[i] == '\n')
			break ;
		i++;
	}
}

char	**ft_read_file(char *argv)
{
	char	**buf;
	int		i;
	int		fd;
	int		c;
	int		ret;
	int		l;

	i = 0;
	ret = 0;
	c = ft_get_number_columns(argv);
	l = ft_get_number_lines(argv);
	fd = open(argv, O_RDONLY);
	ft_get_second_line(fd);
	buf = malloc(l * sizeof(char *));
	if (buf == NULL)
		return (NULL);
	while (i < l)
	{
		buf[i] = malloc(c * sizeof(char));
		if (buf[i] == NULL)
			return (NULL);
		i++;
	}
	i = 0;
	while (i < l)
	{
		ret = read(fd, buf[i], c);
		if (ret == -1)
			return (NULL);
		buf[i++][c - 1] = '\0';
	}
	close (fd);
	return (buf);
}
