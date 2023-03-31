/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:40:27 by shou              #+#    #+#             */
/*   Updated: 2023/03/31 11:46:11 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = argc - 1;
	if (argc > 1)
	{
		while (j > 0)
		{
			while (argv[j][i])
			{
				c = argv[j][i];
				write(1, &c, 1);
				i++;
			}
			i = 0;
			write(1, "\n", 1);
			j--;
		}
	}
	return (0);
}
