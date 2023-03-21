/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:05:46 by shou              #+#    #+#             */
/*   Updated: 2023/03/21 16:14:21 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		check_sw;

	check_sw = 1;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			check_sw = 0;
		}
		str++;
	}
	return (check_sw);
}

/*
#include <stdio.h>
int	main(void)
{
	int	check;

	check = ft_str_is_numeric("");
	printf("%d", check);
}
*/
