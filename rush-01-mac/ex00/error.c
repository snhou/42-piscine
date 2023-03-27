/* ************************************************************************ */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkerschl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:30:55 by jkerschl          #+#    #+#             */
/*   Updated: 2023/03/25 17:48:27 by jkerschl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (argc != 2)
    {
        write(1, "Error\n", 6);
        return (0);
    }
    while (j<31)
    {
        if ((argv[1][j] < 49 || argv[1][j] > 52) && argv[1][j] != 32)
        {
            write(1, "Error\n", 6);
            return (0);
		}
		else
		{
            if (argv[1][j] >= 49 && argv[1][j] <= 52 && argv[1][j + 1] != 32 && j != 30)
            {
                write(1, "Error\n", 6);
                return (0);
            }
            if (argv[1][j] == 32 && (argv[1][j + 1] < 49 || argv[1][j + 1] > 52))
            {
                write(1, "Error\n", 6);
                return (0);
            }
        }
		j++;
    }
    while (i < 23)
    {
        // printf("%c %c\n", argv[1][i], argv[1][i + 8]);
        if (i == 6)
            i = i + 10;
        else    i = i + 2;
    }
}
