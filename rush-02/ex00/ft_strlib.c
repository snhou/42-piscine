/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 07:13:31 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/02 21:17:42 by tischmid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlib.h"

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*o_dest;

	o_dest = dest;
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (o_dest);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*orig_s1;

	orig_s1 = dest;
	while (*dest)
		++dest;
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (orig_s1);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char	*orig_src;

	orig_src = src;
	while (size-- > 1 && *src)
		*dest++ = *src++;
	*dest = 0;
	size = 0;
	while (*orig_src++)
		++size;
	return (size);
}
