/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:58:40 by shou              #+#    #+#             */
/*   Updated: 2023/03/19 12:57:53 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	flow_control(int x, int y, int a, int b)
{
	if (x == 1 && (y == 1 || y == b))
	{
		ft_putchar('A');
	}
	else if (x == a && (y == 1 || y == b))
	{
		ft_putchar('C');
	}
	else if (!((y != 1 && y != b) && (x != 1 && x != a)))
	{
		ft_putchar('B');
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
