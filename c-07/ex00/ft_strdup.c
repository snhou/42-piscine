/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:04:03 by shou              #+#    #+#             */
/*   Updated: 2023/04/04 11:09:42 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cur;

	cur = 0;
	while (str[cur] != 0)
		cur++;
	return (cur);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		cur;

	dup = (char *)malloc(ft_strlen(src) + 1);
	cur = 0;
	while (src[cur] != 0)
	{
		dup[cur] = src[cur];
		cur++;
	}
	dup[cur] = 0;
	return (dup);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = "Hello";
	char	*dup;

	dup = ft_strdup(str);
	printf("%s", dup);
}
*/