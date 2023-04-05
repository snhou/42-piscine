/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:58:00 by shou              #+#    #+#             */
/*   Updated: 2023/04/05 14:11:31 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

#include <stdio.h>

int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("%d\n", point.x);
	printf("%d\n", point.y);
	return (0);
}
