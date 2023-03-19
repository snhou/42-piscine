/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:29:04 by shou              #+#    #+#             */
/*   Updated: 2023/03/17 10:47:56 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	norminette_func(char a, char b, char c)
{
	write(1, & a, 1);
	write(1, & b, 1);
	write(1, & c, 1);
	if (a != '7')
	{
		write(1, & ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	y = '1';
	z = '2';
	while (x <= '7')
	{
		while (y <= '8')
		{
			while (z <= '9')
			{
				if ((x != y) && (y != z))
				{
					norminette_func(x, y, z);
				}
				z++;
			}
			z = y + 1;
			y++;
		}
		y = x + 1;
		x++;
	}
}

// int main(void){
// 	ft_print_comb();
// 	return 0;
// }