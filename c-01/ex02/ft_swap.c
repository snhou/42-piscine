/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:43:19 by shou              #+#    #+#             */
/*   Updated: 2023/03/18 22:08:59 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

//int	main(void)
//{
//	int	x;
//	int	y;
//	int	*x_ptr;
//	int	*y_ptr;

//	x = 3;
//	y = 4;
//	x_ptr = &x;
//	y_ptr = &y;
//	printf("%d", x);
//	printf("%s", "\n");
//	printf("%d", y);
//	printf("%s", "\n");
//	printf("%p", x_ptr);
//	printf("%s", "\n");
//	printf("%p", y_ptr);
//	printf("%s", "\n");
//	ft_swap(x_ptr, y_ptr);
//	printf("%d", x);
//	printf("%s", "\n");
//	printf("%d", y);
//	printf("%s", "\n");
//	printf("%p", x_ptr);
//	printf("%s", "\n");
//	printf("%p", y_ptr);
//}
