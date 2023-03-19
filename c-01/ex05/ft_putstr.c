/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:41:08 by shou              #+#    #+#             */
/*   Updated: 2023/03/19 18:00:37 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		printf("%p",str);
		str ++;
	}
}

int	main(void)
{
	char	*str_ptr;

	str_ptr = "qwerty";
	//printf("%p",str_ptr);
	ft_putstr(str_ptr);
	return (0);
}
