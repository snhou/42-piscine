/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:32:02 by shou              #+#    #+#             */
/*   Updated: 2023/03/31 11:38:41 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			while (argv[j][i])
			{
				c = argv[j][i];
				write(1, &c, 1);
				i++;
			}
			i = 0;
			write(1, "\n", 1);
			j++;
		}
	}
	return (0);
}
