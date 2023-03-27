/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:54:25 by shou              #+#    #+#             */
/*   Updated: 2023/03/24 10:34:48 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[] = "asda";
	char	src[] = "shawnshawn";

	printf("%s\n", dest);
	//ft_strncpy(dest, src, 1);
	strncpy(dest, src, 4);
	printf("%s\n", dest);
	return(0);
}
*/
