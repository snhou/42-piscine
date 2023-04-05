/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:16:47 by shou              #+#    #+#             */
/*   Updated: 2023/04/04 11:16:21 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*buf;
	int		i;

	if (min >= max)
		return (0);
	buf = (int *)malloc(sizeof(int) * (max - min));
	if (!buf)
		return (0);
	i = 0;
	while (min < max)
	{
		buf[i] = min;
		i++;
		min++;
	}
	return (buf);
}
/*
#include <stdio.h>
int	main(void)
{
	int	max;
	int	min;
	int	*range;

	max = 10;
	min = 5;
	range = ft_range(min, max);
	for (int i = 0; i < (max-min);i++)
	{
		printf("%d, ", range[i]);
	}
}
*/