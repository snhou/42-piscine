/* ************************************************************************** */
/*                                                                            */
/*   ALMOOOOOOOST                                         :::      ::::::::   */
/*   ft_ntow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 20:26:44 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/02 23:42:00 by tischmid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ntow.h"
#include "ft_linked_list.h"
#include "ft_strlib.h"
#include "dictparse.h"
#include "ft_convert.h"
#include "ft_array.h"
#include "ft_math.h"
#include <stdlib.h>
#include <stdio.h>

int	num_to_words_free(char **triplets, char **parts, char *thousands_power)
{
	free_arr(triplets);
	free_arr(parts);
	free(thousands_power);
	return (0);
}

void	last_digit(int digit, t_map_entry *map, char *triplet_word)
{
	char	*digit_str;

	digit_str = malloc(sizeof(char) * 2);
	ft_itoa(digit_str, digit);
	ft_strcat(triplet_word, ll_map_get_value(map, digit_str));
	ft_strcat(triplet_word, " ");
	free(digit_str);
}

char	*triplet_to_word(char *triplet, char *triplet_word, t_map_entry *map)
{
	int		triplet_len;
	char	*map_value;
	int		idx;
	int		positional_value;
	int		digit;
	char	*digit_str;
	char	*lookup_num;

	triplet_len = ft_strlen(triplet);
	idx = 0;
	while (triplet_len--)
	{
		lookup_num = malloc(sizeof(char) * MAX_DIGITS);
		digit = triplet[idx] - '0';
		positional_value = power(10, triplet_len) * digit;
		ft_itoa(lookup_num, positional_value);
		digit_str = malloc(sizeof(char) * 2);
		ft_itoa(digit_str, digit);
		map_value = ll_map_get_value(map, digit_str);
		free(digit_str);
		if (map_value == NULL)
		{
			free(lookup_num);
			return (ft_strcpy(triplet_word, "MISSING_KEY"));
		}
		if (triplet_len == 2)
			map_value = ll_map_get_value(map, "100");
		else
			map_value = ll_map_get_value(map, lookup_num);
		free(lookup_num);
		if (map_value == NULL)
			return (ft_strcpy(triplet_word, "MISSING_KEY"));
		if (triplet_len == 2)
			last_digit(digit, map, triplet_word);
		ft_strcat(triplet_word, map_value);
		if (triplet_len != 0)
			ft_strcat(triplet_word, " ");
		++idx;
	}
	return (triplet_word);
}

char	*t_to_w_wrapper(char *triplet, t_map_entry *map)
{
	char	*map_value;
	char	*triplet_word;

	triplet_word = malloc(sizeof(char) * MAX_LINE_LENGTH * 5);
	ft_strcpy(triplet_word, "");
	if (ft_atoi(triplet) < 20)
	{
		map_value = ll_map_get_value(map, triplet);
		if (map_value == NULL)
			return (ft_strcpy(triplet_word, "MISSING_KEY"));
		ft_strcat(triplet_word, map_value);
		return (triplet_word);
	}
	else
		return (triplet_to_word(triplet, triplet_word, map));
}

int	set_parts(char **parts, char **triplets, char *k_power, t_map_entry *map)
{
	char	*thousands_power_word;
	int		idx;
	int		size;
	char	*triplet_word;

	size = arr_len(triplets);
	idx = 0;
	while (size--)
	{
		ft_itoa(k_power, power(1000, size));
		thousands_power_word = ll_map_get_value(map, k_power);
		if (!thousands_power_word)
			return (num_to_words_free(triplets, parts, k_power));
		triplet_word = t_to_w_wrapper(triplets[idx], map);
		if (!ft_strcmp(triplet_word, "MISSING_KEY"))
			return (num_to_words_free(triplets, parts, k_power));
		parts[idx] = malloc(sizeof(char) * MAX_LINE_LENGTH * 6);
		ft_strcpy(parts[idx], triplet_word);
		if (size != 0)
			ft_strcat(ft_strcat(parts[idx], " "), thousands_power_word);
		free(triplet_word);
		++idx;
	}
	parts[idx] = NULL;
	return (1);
}

char	*num_to_words(char *str_nbr, t_map_entry *map)
{
	char	**triplets;
	char	**parts;
	char	*result;
	char	*thousands_power;

	triplets = partition_right(str_nbr, 3);
	thousands_power = malloc(sizeof(char) * MAX_LINE_LENGTH);
	parts = malloc(sizeof(char *) * (arr_len(triplets) + 1));
	if (!set_parts(parts, triplets, thousands_power, map))
		return (NULL);
	result = ft_strjoin(arr_len(parts), parts, " ");
	num_to_words_free(triplets, parts, thousands_power);
	return (result);
}
