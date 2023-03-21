/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:38:40 by shou              #+#    #+#             */
/*   Updated: 2023/03/21 16:08:24 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		check_sw;

	check_sw = 1;
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'z' || (*str > 'Z' && *str < 'a'))
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
