/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:08:57 by shou              #+#    #+#             */
/*   Updated: 2023/03/21 15:08:14 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		idx;
	int		temp;

	idx = 0;
	while (idx < (size / 2))
	{
		temp = tab[idx];
		tab[idx] = tab[size - idx - 1];
		tab[size - idx - 1] = temp;
		idx++;
	}
}

//int	main(void)
//{
//	int	my_numbers[5] = {3,7,6,8,9};
//	int	*my_numbers_ptr;
//	my_numbers_ptr = &my_numbers[0];
//	ft_rev_int_tab(my_numbers_ptr, 5);
//	for (int i = 0; i < 5; i++) {     
//		printf("%d ", my_numbers[i]);     
//    }
//	return (0);
//}
