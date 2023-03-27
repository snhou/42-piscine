/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:38:15 by shou              #+#    #+#             */
/*   Updated: 2023/03/23 16:19:10 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 65 && str[idx] <= 90)
		{
			str[idx] = str[idx] + 32;
		}
		idx++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(int n, char **argument_value)
{
	if (n==2)
	{
		printf("%s", ft_strlowcase(argument_value[1]));
	}
	return(0);
}
*/
