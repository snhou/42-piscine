/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictparse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 21:45:39 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/02 23:08:01 by tischmid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictparse.h"
#include "ft_io.h"
#include "ft_convert.h"
#include "ft_strlib.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int	parse_line(char *line, char *key, char *value)
{
	int		idx;
	int		i;
	int		only_whitespace;

	idx = 0;
	only_whitespace = 1;
	while (line[idx] && line[idx] != ':')
		if (!ft_isspace(line[idx++]))
			only_whitespace = 0;
	if (!only_whitespace && !line[idx])
		return (0);
	ft_itoa(key, ft_atoi(line));
	line += idx + 1;
	i = 0;
	while (ft_isspace(line[i++]))
		;
	if (!line[i])
		return (0);
	*(last_non_whitespace(line) + 1) = 0;
	line += i - 1;
	ft_strcpy(value, line);
	return (1);
}

int	parse_dict(char *path, t_map_entry *map)
{
	char	buf[MAX_LINE_LENGTH];
	int		offset;
	char	*key;
	char	*value;

	offset = 0;
	key = malloc(sizeof(char) * MAX_DIGITS);
	value = malloc(sizeof(char) * MAX_LINE_LENGTH);
	while (1)
	{
		offset = readline(buf, MAX_LINE_LENGTH, path, offset);
		if (offset == FILE_READ_ERROR)
			break ;
		else if (offset == LINE_TOO_LONG)
			return (0);
		if (!parse_line(buf, key, value))
			return (0);
		ll_map_push(map, key, value);
	}
	free(key);
	free(value);
	return (1);
}
