/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:05:10 by shou              #+#    #+#             */
/*   Updated: 2023/04/02 19:20:00 by tischmid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_convert.h"
#include <limits.h>

int	rm_spaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	i = 0;
	result = 0;
	sign = rm_spaces(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}

int	ft_itoa(char *buf, int nb)
{
	int	offset;

	if (nb > 9)
	{
		offset = ft_itoa(buf, nb / 10);
		return (offset + ft_itoa(buf + offset, nb % 10));
	}
	else if (nb == INT_MIN)
	{
		offset = ft_itoa(buf, nb / 10);
		return (ft_itoa(buf + offset + 1, -(nb % 10)));
	}
	else if (nb < 0)
	{
		*buf = '-';
		return (ft_itoa(buf + 1, -nb));
	}
	*buf = nb % 10 + '0';
	*(buf + 1) = 0;
	return (1);
}
