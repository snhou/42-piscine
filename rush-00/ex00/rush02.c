/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:58:40 by shou              #+#    #+#             */
/*   Updated: 2023/03/19 12:49:51 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	flow_control(int x, int y, int a, int b)
{
	if ((y != 1 && y != b) && (x == 1 || x == a))
	{
		ft_putchar('B');
	}
	else if ((x != 1 && x != a) && (y == 1 || y == b))
	{
		ft_putchar('B');
	}
	else if (y == 1 && (x == 1 || x == a))
	{
		ft_putchar('A');
	}
	else if (y == b && (x == 1 || x == a))
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int a, int b)
{
	int	x;
	int	y;

	y = 1;
	while (y <= b)
	{	
		x = 1;
		while (x <= a)
		{
			flow_control(x, y, a, b);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
