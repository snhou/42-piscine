/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:07:53 by shou              #+#    #+#             */
/*   Updated: 2023/04/05 16:27:53 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	repeat_cnt(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	else if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	else
		return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			j = 0;
			while (j < repeat_cnt(argv[1][i]))
			{
				write(1, &argv[1][i], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
