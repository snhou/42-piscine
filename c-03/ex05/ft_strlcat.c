/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:38:56 by shou              #+#    #+#             */
/*   Updated: 2023/03/27 11:52:22 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	j = dest_len;
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src[i] && (dest_len + i + 1 < size))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}

/*
#include <stdio.h>

int	main(void)
{
	char s1[100] = "Hello, ";
	char s2[100] = "everyone!!";
	int num = 20;
	int total_num = ft_strlcat(s1, s2, num);

	printf("%d\n", total_num);
	printf("%s\n", s1);
	return (0);
}
*/
