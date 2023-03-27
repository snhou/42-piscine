/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:37:17 by shou              #+#    #+#             */
/*   Updated: 2023/03/27 10:58:02 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = "aaa";
	char str2[] = "aa3";
	int num = 3;
	printf("%i\n", ft_strncmp(str1, str2, num));
	printf("%i\n", strncmp(str1, str2, num));
	return 0;
}
*/
