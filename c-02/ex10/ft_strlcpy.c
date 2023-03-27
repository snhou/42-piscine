/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:42:05 by shou              #+#    #+#             */
/*   Updated: 2023/03/27 10:34:04 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	count;

	len = 0;
	while (src[len])
		len++;
	count = 0;
	if (size != 0)
	{
		while (count < (size - 1) && src[count])
		{
			dest[count] = src[count];
			count ++;
		}
		dest[count] = '\0';
	}
	return (len);
}

/*
#include <stdio.h>

int	main(void)
{
	char	dest[] = "";
	char	src[] = "shawnshawn";
	int num;

	printf("%s\n", dest);
	num = ft_strlcpy(dest, src, 5);
	printf("%s\n", dest);
	printf("%d\n", num);
	return(0);
}
*/