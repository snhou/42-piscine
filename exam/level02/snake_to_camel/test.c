/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:14:36 by shou              #+#    #+#             */
/*   Updated: 2023/04/05 18:30:51 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc==2)
	{
		while(*argv[1])
		{
			if(*argv[1] == '_')
				*(++argv[1]) -= 32;
			write(1, argv[1], 1);
			argv[1]++;
		}
		write(1, "\n", 1);
	}
}