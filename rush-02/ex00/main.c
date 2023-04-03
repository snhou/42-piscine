/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 07:11:58 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/03 16:39:54 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "argparse.h"
#include "dictparse.h"
#include "ft_linked_list.h"
#include "printing.h"
#include "ft_convert.h"
#include "ft_ntow.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char		*str_nbr;
	char		*path;
	char		*numberwords;
	t_map_entry	*map;

	if (!parse_args(argc, argv, &path, &str_nbr))
		return (puterr("Error\n", 1));
	map = ll_map_new_entry("about", "Dict for the data from *.dict file", NULL);
	if (!parse_dict(path, map))
		return (puterr("Dict Error\n", 2));
	numberwords = num_to_words(str_nbr, map);
	if (numberwords != NULL)
	{
		ft_putstr(numberwords);
		ft_putchar('\n');
		free(numberwords);
	}
	else
	{
		free(numberwords);
		return (puterr("Dict Error\n", 3));
	}
	ll_clear(map, 1);
	return (0);
}
