/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_solution.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:44:49 by shou              #+#    #+#             */
/*   Updated: 2023/04/03 21:02:14 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int	ft_min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	else
		return (c);
}

int	**ft_generate_map(int l, int c)
{
	int	**map2;
	int	i;

	i = 0;
	map2 = malloc(l * sizeof(int *));
	if (map2 == NULL)
		return (NULL);
	while (i < l)
	{
		map2[i] = malloc(c * sizeof(int));
		if (map2[i] == NULL)
			return (NULL);
		i++;
	}
	return (map2);
}

int	ft_biggest_square(char **map, int c, int l, char o)
{
	int	i;
	int	j;
	int	**c_m = NULL;
	int	count_max;

	i = 0;
	count_max = 0;
	c_m = ft_generate_map(l, c);
	while (i < l)
	{
		j = 0;
		while (j < c - 1)
		{
			if (map[i][j] == o)
				c_m[i][j] = 0;
			else if (i == 0 || j == 0)
				c_m[i][j] = 1;
			else
				c_m[i][j] = ft_min(c_m[i - 1][j], c_m[i][j - 1], c_m[i - 1][j - 1]) + 1;
			if (c_m[i][j] > count_max)
				count_max = c_m[i][j];
			j++;
		}
		i++;
	}
	free(c_m);
	return (count_max);
}

int	ft_find_position_square(char **map, int c, int l, char o)
{
	int	i;
	int	j;
	int	**c_m;
	int	count_max;
	int	p;

	c_m = NULL;
	i = 0;
	p = 0;
	count_max = ft_biggest_square(map, c, l, o);
	c_m = ft_generate_map(l, c);
	while (i < l)
	{
		j = 0;
		while (j < c - 1)
		{
			if (map[i][j] == o)
				c_m[i][j] = 0;
			else if (i == 0 || j == 0)
				c_m[i][j] = 1;
			else
				c_m[i][j] = ft_min(c_m[i - 1][j], c_m[i][j - 1], c_m[i - 1][j - 1]) + 1;
			if (c_m[i][j] == count_max)
			{
				p = i * (c - 1) + j;
				break ;
			}
			j++;
		}
		i++;
	}
	free(c_m);
	return (p);
}
