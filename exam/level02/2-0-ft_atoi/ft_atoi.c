/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:34:45 by angavrel          #+#    #+#             */
/*   Updated: 2023/04/05 18:09:52 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //

int		ft_atoi(char *s)
{
	int		sign;
	long	r;

	r = 0;
	sign = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		r = r * 10 + *s - '0';
		s++;
	}
	return (sign * (int)r);
}

int		main(void)
{
	char a[] = "    \n\n\v\f\r\t -++5234AAAgreghrsth";// -5234
	printf("%d\n",ft_atoi(a));//
}
