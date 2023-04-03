/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 21:55:18 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/01 22:01:07 by tischmid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printing.h"
#include "colors.h"
#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else if (nb == INT_MIN)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(-(nb % 10));
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
		ft_putchar(nb % 10 + '0');
}

int	puterr(char *errmsg, int errcode)
{
	ft_putstr(RED);
	ft_putstr(errmsg);
	ft_putstr(RESET);
	return (errcode);
}
