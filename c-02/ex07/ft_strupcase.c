/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:38:15 by shou              #+#    #+#             */
/*   Updated: 2023/03/23 16:19:02 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 97 && str[idx] <= 122)
		{
			str[idx] = str[idx] - 32;
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
		printf("%s", ft_strupcase(argument_value[1]));
	}
	return(0);
}
*/
