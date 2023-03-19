/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:14:06 by shou              #+#    #+#             */
/*   Updated: 2023/03/18 16:08:06 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	norminette_func(char x, char y, char z, char u)
{
	while (u <= '9')
	{
		if ((x <= z) && (y < u))
		{
			write(1, & x, 1);
			write(1, & y, 1);
			write(1, & " ", 1);
			write(1, & z, 1);
			write(1, & u, 1);
			if (! ((x == '9') && (y == '8') && (z == '9') && (u == '9')))
			{
				write(1, & ", ", 2);
			}
		}
		u++;
	}
}

void	ft_print_comb2(void)
{
	char	x;
	char	y;
	char	z;
	char	u;

	x = '0';
	y = '0';
	z = '0';
	u = '0';
	while (x <= '9')
	{
		while (y <= '9')
		{
			while (z <= '9')
			{
				norminette_func(x, y, z, u);
				z++;
				u = '0';
			}
			y++;
			z = '0';
		}
		x++;
		y = '0';
	}
}

//int	main(void)
//{
//	ft_print_comb2();
//	return (0);
//}
