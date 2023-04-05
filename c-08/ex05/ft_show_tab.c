/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 11:45:09 by shou              #+#    #+#             */
/*   Updated: 2023/04/05 14:17:29 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int nb)
{
	char	n;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else
	{
		n = nb + '0';
		write(1, &n, 1);
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while ((*par).str)
	{
		ft_putstr(par->str);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_putstr((par)->copy);
		++par;
	}
}


#include "../ex04/ft_strs_to_tab.c"

int	main(void)
{
	char		*strs[4];
	t_stock_str	*tab;

	strs[0] = "AAA";
	strs[1] = "BBBB";
	strs[2] = "CCCCC";
	tab = ft_strs_to_tab(3, strs);
	ft_show_tab(tab);
	return (0);
}
