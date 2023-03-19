/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:55:59 by shou              #+#    #+#             */
/*   Updated: 2023/03/19 14:37:48 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//int	main(void)
//{
//	int	x;
//	int	y;
//	int	*x_ptr;
//	int	*y_ptr;

//	x = 7;
//	y = 4;
//	x_ptr = &x;
//	y_ptr = &y;
//	printf("%d", *x_ptr);
//	printf("%s", "\n");
//	printf("%d", *y_ptr);
//	printf("%s", "\n");
//	printf("%p", x_ptr);
//	printf("%s", "\n");
//	printf("%p", y_ptr);
//	printf("%s", "\n");
//	ft_div_mod(x, y, x_ptr, y_ptr);
//	printf("%d", *x_ptr);
//	printf("%s", "\n");
//	printf("%d", *y_ptr);
//	printf("%s", "\n");
//	printf("%p", x_ptr);
//	printf("%s", "\n");
//	printf("%p", y_ptr);
//}
