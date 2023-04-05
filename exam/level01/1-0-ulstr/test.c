/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:40:19 by shou              #+#    #+#             */
/*   Updated: 2023/04/05 17:34:45 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc ==2 )
	{
		while (*argv[1])
		{
			if (*argv[1] > 'A' && *argv[1] < 'Z')
				*argv[1] += 32;
			else if (*argv[1] > 'a' && *argv[1] < 'z')
				*argv[1] -= 32;
			write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
