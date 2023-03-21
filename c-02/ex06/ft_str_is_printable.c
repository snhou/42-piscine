/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:28:43 by shou              #+#    #+#             */
/*   Updated: 2023/03/21 16:35:40 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		check_sw;

	check_sw = 1;
	while (*str != '\0')
	{
		if (*str < 32 || *str > 127)
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

	check = ft_str_is_printable("@$@$@$@$!#!#!#\n");
	printf("%d", check);
}
*/
