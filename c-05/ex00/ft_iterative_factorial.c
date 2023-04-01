/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:52:02 by shou              #+#    #+#             */
/*   Updated: 2023/04/01 13:24:27 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (nb > 1)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(12));
	return (0);
}
*/