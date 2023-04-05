/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:51:21 by shou              #+#    #+#             */
/*   Updated: 2023/04/04 12:59:18 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (*(str + idx) != '\0')
	{
		idx++;
	}
	return (idx);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
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
/*
int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int		size;

	size = 1;
	strs = (char **)malloc(size * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * (5 + 1));
	//strs[1] = (char *)malloc(sizeof(char) * (2));
	//strs[2] = (char *)malloc(sizeof(char) * (2));
	//strs[3] = (char *)malloc(sizeof(char) * (2));
	strs[0] = "Hello";
	//strs[1] = "A";
	//strs[2] = "B";
	//strs[3] = "C";
	separator = "|";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}
*/