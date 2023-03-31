/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:52:39 by shou              #+#    #+#             */
/*   Updated: 2023/03/30 17:18:24 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	num_lower_upper(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else if (c >= 97 && c <= 122)
		return (2);
	else if (c >= 65 && c <= 90)
		return (3);
	else
		return (0);
}

int	check_valid(char	*base)
{
	int	len;
	int	i;

	len = 0;
	while (base[len])
	{
		if (base[0] == '\0' || base[len] == 43 || base[len] == 45)
			return (0);
		i = len + 1;
		while (base[i])
		{
			if (base[i] == base[len])
				return (0);
			i++;
		}
		len++;
	}
	return (len);
}

int	rm_spaces(char	*str, int *ptr_i)
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

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	i;
	int	len;
	int	sign;

	len = check_valid(base);
	if (len == 1 || len == 0)
		return (0);
	i = 0;
	result = 0;
	sign = rm_spaces(str, &i);
	while (str[i] && num_lower_upper(str[i]))
	{
		result *= len;
		if (num_lower_upper(str[i]) == 3)
			result += str[i] - 7 - 48;
		else if (num_lower_upper(str[i]) == 2)
			result += str[i] - 39 - 48;
		else if (num_lower_upper(str[i]) == 1)
			result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}

/*
int main(void)
{
	char *s = "  ---ad33c";
	printf("%d\n", ft_atoi_base(s, "0123456789ABCD"));
}
*/
