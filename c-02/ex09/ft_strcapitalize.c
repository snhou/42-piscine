/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:43:11 by shou              #+#    #+#             */
/*   Updated: 2023/03/23 12:21:03 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	num(char c)
{
	return (c >= 48 && c <= 57);
}

int	lowercase(char c)
{
	return (c >= 97 && c <= 122);
}

int	uppercase(char c)
{
	return (c >= 65 && c <= 90);
}

char	*ft_strcapitalize(char *str)
{
	int		idx;
	char	pre_chr;

	idx = 0;
	while (str[idx] != '\0')
	{
		pre_chr = str[idx - 1];
		if (idx == 0 && lowercase(str[idx]))
		{
			str[idx] = str[idx] - 32;
			idx++;
			continue ;
		}
		if (num(pre_chr) || lowercase(pre_chr) || uppercase(pre_chr))
			if (uppercase(str[idx]))
				str[idx] = str[idx] + 32;
		if (!(num(pre_chr) || lowercase(pre_chr) || uppercase(pre_chr)))
			if (lowercase(str[idx]))
				str[idx] = str[idx] - 32;
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
		printf("%s", ft_strcapitalize(argument_value[1]));
	}
	return(0);
}
*/