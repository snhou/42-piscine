/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:10:39 by shou              #+#    #+#             */
/*   Updated: 2023/04/05 17:17:04 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *str)
{
	int		len;
	char	*buf;
	int		idx;

	idx = 0;
	len = ft_strlen(str);
	buf = (char *)malloc(sizeof(char) * (len + 1));
	if (!buf)
		return (NULL);
	while (str[idx])
	{
		buf[idx] = str[idx];
		idx ++;
	}
	buf[idx] = '\0';
	return (buf);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			idx;
	t_stock_str	*tab;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	idx = -1;
	while (++idx < ac)
	{
		tab[idx].size = ft_strlen(av[idx]);
		tab[idx].str = av[idx];
		tab[idx].copy = ft_strcpy(av[idx]);
	}
	tab[idx].str = 0;
	return (tab);
}

/*
#include <stdio.h>

int	main(void)
{
	char		*strs[4];
	t_stock_str	*tab;

	strs[0] = "AAA";
	strs[1] = "BBBB";
	strs[2] = "CCCCC";
	tab = ft_strs_to_tab(3, strs);
	for(int i=0;i<3;i++){
		printf("{size:%d, str:%s, str_p:%p, copy:%s, copy_p:%p}\n",
		tab[i].size, tab[i].str, tab[i].str, tab[i].copy, tab[i].copy);
	}
	return (0);
}
*/