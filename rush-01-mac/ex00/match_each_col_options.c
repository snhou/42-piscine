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

int *match_each_col_options(int col_options[6][4], int all_row_options[4][6][4], int col_pos, int row_pos, int row_arr,int out_arr[6][4])
{
	int sw;
	int *sw_ptr;
	int i;
	int k;

	sw = 0;
	i = 0;
	k = 0;
	sw_ptr = &sw;
	while(i < 6)
	{
		if(col_options[col_pos][row_arr] == all_row_options[row_arr][i][row_pos])
		{
			sw = 1;
			while(k < 4)
			{
				out_arr[i][k] = all_row_options[row_arr][i][k];
				k++;
			}
		}
		i++;
	}
	return sw_ptr;
}