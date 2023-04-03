/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:34:51 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/02 23:09:10 by tischmid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"
#include "ft_strlib.h"
#include <stdlib.h>

char	**partition_right(char *str, int part_size)
{
	int		strlen;
	int		first_part_size;
	int		idx;
	char	**arr;

	strlen = ft_strlen(str);
	arr = malloc(sizeof(char *) * (strlen + 1));
	first_part_size = strlen % part_size;
	idx = 0;
	if (first_part_size)
	{
		arr[idx] = malloc(sizeof(char) * (first_part_size + 1));
		ft_strlcpy(arr[idx], str, first_part_size + 1);
		str += first_part_size;
		++idx;
	}
	while (*str)
	{
		arr[idx] = malloc(sizeof(char) * (part_size + 1));
		ft_strlcpy(arr[idx], str, part_size + 1);
		str += part_size;
		++idx;
	}
	arr[idx] = NULL;
	return (arr);
}

int	arr_len(char **arr)
{
	int	size;

	size = 0;
	while (*arr++)
		++size;
	return (size);
}

void	free_arr(char **arr)
{
	int	i;

	i = -1;
	while (arr[++i])
		free(arr[i]);
	free(arr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		sep_len;
	int		idx;
	char	*joined_str;

	total_len = 0;
	sep_len = ft_strlen(sep);
	idx = -1;
	while (++idx < size)
		total_len += ft_strlen(strs[idx]) + sep_len;
	total_len -= sep_len;
	if (total_len < 1)
		joined_str = malloc(sizeof(char) * 1);
	else
		joined_str = malloc(sizeof(char) * (total_len + 1));
	idx = -1;
	joined_str[0] = 0;
	while (++idx < size)
	{
		ft_strcat(joined_str, strs[idx]);
		if (idx < size - 1)
			ft_strcat(joined_str, sep);
	}
	return (joined_str);
}
