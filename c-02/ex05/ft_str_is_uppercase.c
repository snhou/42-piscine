/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:22:19 by shou              #+#    #+#             */
/*   Updated: 2023/03/21 16:27:10 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		check_sw;

	check_sw = 1;
	while (*str != '\0')
	{
		if (*str > 'Z' || *str < 'A')
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

	check = ft_str_is_alpha("");
	printf("%d", check);
}
*/