/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argparse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:12:53 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/03 16:42:02 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "argparse.h"
#include "ft_io.h"

// TODO: Bonus for (argc < 2): Use read to take nbr from stdin
int	parse_args(int argc, char **argv, char **path, char **str_nbr)
{
	if (argc > 3)
		return (0);
	*path = "./dicts/numbers.dict";
	if (argc < 2)
	{
		*str_nbr = "123";
	}
	else
		*str_nbr = argv[1];
	if (argc == 3)
	{
		if (!file_readable(argv[1]))
			return (0);
		*path = argv[1];
		*str_nbr = argv[2];
	}
	return (1);
}
