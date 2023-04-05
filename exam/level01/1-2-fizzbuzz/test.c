/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:48:34 by shou              #+#    #+#             */
/*   Updated: 2023/04/05 18:02:33 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nbr(int nbr)
{
	if (nbr < 10)
		write(1, &"0123456789"[nbr], 1);
	else
	{
		print_nbr(nbr / 10);
		print_nbr(nbr % 10);
	}
}

int	main(void)
{
	int	i;

	i = 1;
	while (i < 101)
	{
		if ((i % 3 == 0) && (i % 5 ==0))
			write(1,"fizzbuzz",8);
		else if (i % 3 == 0)
			write(1,"fizz",4);
		else if (i % 5 == 0)
			write(1,"buzz",4);
		else
		{
			print_nbr(i);
		}
		i++;
		write(1,"\n",1);
	}
}