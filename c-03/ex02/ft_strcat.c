/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:37:53 by shou              #+#    #+#             */
/*   Updated: 2023/03/27 11:14:40 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
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

	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest1, src1));
	
	return (0);
}
*/
