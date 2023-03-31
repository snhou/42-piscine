/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:03:47 by shou              #+#    #+#             */
/*   Updated: 2023/03/30 16:56:42 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_valid(char	*base)
{
	int	len;
	int	i;

	len = 0;
	while (base[len])
	{
		if (base[0] == '\0' || base[len] == 43 || base[len] == 45)
			return (0);
		i = len + 1;
		while (base[i])
		{
			if (base[i] == base[len])
				return (0);
			i++;
		}
		len++;
	}
	return (len);
}

void	ft_putnbr_base(int nb, char	*base)
{
	int	len;

	len = check_valid(base);
	if (len != 1 && len)
	{
		if (nb > (len - 1))
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
		else if (nb < 0)
		{
			write(1, "-", 1);
			ft_putnbr_base(-nb, base);
		}
		else
		{
			write(1, &base[nb], 1);
		}
	}
}

/*
int	main(void)
{
	ft_putnbr_base (-29, "poneyvif");
	return (0);
}
*/
