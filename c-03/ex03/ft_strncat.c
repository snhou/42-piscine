/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:38:22 by shou              #+#    #+#             */
/*   Updated: 2023/03/27 11:16:29 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0' && i < nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
	char dest[8] = "Hello, ";
	char src[20] = "everyone";
	char dest1[8] = "Hallo, ";
	char src1[20] = "zusammen";
	int num = 7;

	printf("%s\n", ft_strncat(dest, src, num));
	printf("%s\n", strncat(dest1, src1, num));
	
	return (0);
}
*/
