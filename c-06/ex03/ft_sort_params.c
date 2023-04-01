/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:47:58 by shou              #+#    #+#             */
/*   Updated: 2023/04/01 16:33:08 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_swap_str(char **argv, int idx1, int idx2)
{
	char	*temp;

	temp = argv[idx1];
	argv[idx1] = argv[idx2];
	argv[idx2] = temp;
}

void	ft_print_argv(char **argv, int j)
{
	int		k;

	k = 0;
	while (argv[j][k])
	{
		write(1, &argv[j][k], 1);
		k++;
	}
	j++;
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		step;
	int		i;
	int		j;

	step = 0;
	while (step < argc - 1)
	{
		i = 1;
		while (i < argc - step -1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				ft_swap_str(argv, i, i + 1);
			i++;
		}
		step++;
	}
	j = 1;
	while (j < argc)
	{
		ft_print_argv(argv, j);
		j++;
	}
}
