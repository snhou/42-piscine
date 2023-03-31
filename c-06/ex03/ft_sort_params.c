/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:47:58 by shou              #+#    #+#             */
/*   Updated: 2023/03/31 12:53:22 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	swap_str(char **str1_ptr, char **str2_ptr)
{
	char	*temp;

	*temp = *str1_ptr;
	*str1_ptr = *str2_ptr;
	*str2_ptr = temp;
}

int	main(int argc, char **argv)
{
	int		step;
	int		i;

	step = 0;
	while (step < argc - 1)
	{
		i = 0;
		while (i < argc - step -1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]))
			{
				swap_str(&argv[i], &argv[i + 1]);
			}
			i++;
		}
		step++;
	}

	for (int x = 0; x < argc; ++x) {
		printf("%s  ", argv[x]);
	}
	printf("\n");
}
