/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:31:21 by shou              #+#    #+#             */
/*   Updated: 2023/03/20 16:45:32 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (*(str + idx) != '\0')
	{
		idx++;
	}
	return (idx);
}

//int	main(void)
//{
//	char	*str_ptr;
//	int		nbr;

//	str_ptr = "qwerty";
//	nbr = ft_strlen(str_ptr)+48;
//	write(1, &nbr, 1);
//	return (0);
//}
