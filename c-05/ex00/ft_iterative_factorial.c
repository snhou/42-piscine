/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:52:02 by shou              #+#    #+#             */
/*   Updated: 2023/03/30 12:44:30 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 1 || nb > 12)
		return (0);
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
int	main(void)
{
	printf("%d", ft_iterative_factorial(12));
	return (0);
}
*/