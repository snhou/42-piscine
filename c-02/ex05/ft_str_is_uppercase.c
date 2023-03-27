/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:22:19 by shou              #+#    #+#             */
/*   Updated: 2023/03/22 16:35:07 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str > 'Z' || *str < 'A')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(int n, char **argument_value)
{
	if (n==2)
	{
		printf("%d", ft_str_is_uppercase(argument_value[1]));
	}
	return(0);
}
*/