/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:20:31 by shou              #+#    #+#             */
/*   Updated: 2023/03/19 14:40:17 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
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
//	ft_ultimate_div_mod(x_ptr, y_ptr);
//	printf("%d", *x_ptr);
//	printf("%s", "\n");
//	printf("%d", *y_ptr);
//	printf("%s", "\n");
//	printf("%p", x_ptr);
//	printf("%s", "\n");
//	printf("%p", y_ptr);
//}
