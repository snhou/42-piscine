/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_possible_num.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:18:53 by shou              #+#    #+#             */
/*   Updated: 2023/03/28 09:29:59 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);
//int s_all[9][7][4] = {
//	{{1,2,0,0},{4,1,2,3},{4,2,1,3},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}},
//	{{1,3,0,0},{4,2,3,1},{4,1,3,2},{4,3,1,2},{0,0,0,0},{0,0,0,0},{0,0,0,0}},
//	{{1,4,0,0},{4,3,2,1},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}},
//	{{2,1,0,0},{3,1,2,4},{3,2,1,4},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}},
//	{{2,2,0,0},{3,1,4,2},{3,2,4,1},{3,4,1,2},{2,4,1,3},{1,4,2,3},{2,1,4,3}},
//	{{2,3,0,0},{3,4,2,1},{1,4,3,2},{2,4,3,1},{0,0,0,0},{0,0,0,0},{0,0,0,0}},
//	{{3,1,0,0},{1,3,2,4},{2,1,3,4},{2,3,1,4},{0,0,0,0},{0,0,0,0},{0,0,0,0}},
//	{{3,2,0,0},{1,2,4,3},{1,3,4,2},{2,3,4,1},{0,0,0,0},{0,0,0,0},{0,0,0,0}},
//	{{4,1,0,0},{1,2,3,4},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}};

void	all_possible_val1(int s_all2d[9][7])
{
	int	i;
	int	j;

	i = -1;
	while (i++ < 9)
	{
		j = -1;
		while (j++ < 7)
		{
			s_all2d[i][j] = ft_atoi("0000");
		}
	}
	s_all2d[0][0] = ft_atoi("1200");
	s_all2d[1][0] = ft_atoi("1300");
	s_all2d[2][0] = ft_atoi("1400");
	s_all2d[3][0] = ft_atoi("2100");
	s_all2d[4][0] = ft_atoi("2200");
	s_all2d[5][0] = ft_atoi("2300");
	s_all2d[6][0] = ft_atoi("3100");
	s_all2d[7][0] = ft_atoi("3200");
	s_all2d[8][0] = ft_atoi("4100");
}

void	all_possible_val2(int s_all2d[9][7])
{
	s_all2d[0][1] = ft_atoi("4123");
	s_all2d[0][2] = ft_atoi("4213");
	s_all2d[1][1] = ft_atoi("4231");
	s_all2d[1][2] = ft_atoi("4132");
	s_all2d[1][3] = ft_atoi("4312");
	s_all2d[2][1] = ft_atoi("4321");
	s_all2d[3][1] = ft_atoi("3124");
	s_all2d[3][2] = ft_atoi("3214");
	s_all2d[4][1] = ft_atoi("3142");
	s_all2d[4][2] = ft_atoi("3241");
	s_all2d[4][3] = ft_atoi("3412");
	s_all2d[4][4] = ft_atoi("2413");
	s_all2d[4][5] = ft_atoi("1423");
	s_all2d[4][6] = ft_atoi("2143");
	s_all2d[5][1] = ft_atoi("3421");
	s_all2d[5][2] = ft_atoi("1432");
	s_all2d[5][3] = ft_atoi("2431");
	s_all2d[6][1] = ft_atoi("1324");
	s_all2d[6][2] = ft_atoi("2134");
	s_all2d[6][3] = ft_atoi("2314");
	s_all2d[7][1] = ft_atoi("1243");
	s_all2d[7][2] = ft_atoi("1342");
	s_all2d[7][3] = ft_atoi("2341");
	s_all2d[8][1] = ft_atoi("1234");
}

void	get_possible_num(int arr[2], int out_arr[6][4], int s_all2d[9][7])
{
	int	i;
	int	j;
	int	k;

	i = -1;
	while (i++ < 9)
	{
		if (arr[1] * 1000 + arr[2] * 100 == s_all2d[i][0])
		{
			j = -1;
			while (j++ < 7)
			{
				out_arr[j][k] = s_all2d[i][j + 1] / 1000;
				out_arr[j][k + 1] = (s_all2d[i][j + 1] % 1000) / 100;
				out_arr[j][k + 2] = (s_all2d[i][j + 1] % 100) / 10;
				out_arr[j][k + 3] = s_all2d[i][j + 1] % 10;
			}
		}
	}
}

//void	get_possible_num(int arr[2], int out_arr[6][4], int s_all2d[9][7])
//{
//	int	i;
//	int	j;
//	int	k;
//	int	s_all3d[9][7][4];

//	//s_all2d => s_all3d
//	i = -1;
//	while (i++ < 9)
//	{
//		if (arr[0] == s_all3d[i][0][0] && arr[1] == s_all3d[i][0][1])
//		{
//			j = -1;
//			while (j++ < 7)
//			{
//				k = -1;
//				while (k++ < 4)
//					out_arr[j][k] = s_all3d[i][j + 1][k];
//			}
//		}
//	}
//}



#include <stdio.h>



int main()
 {
	int	s_all2d[9][7];

	all_possible_val1(s_all2d);
	all_possible_val2(s_all2d);

 	int first_col[2] = {1,2};
 	int first_col_options[6][4] = {{9,9,9,9},{9,9,9,9},{9,9,9,9},{9,9,9,9},{9,9,9,9},{9,9,9,9}};
 	get_possible_num(first_col,first_col_options,s_all2d);
 	int yyy = 0;
 	int yyyy = 0;

 	while (yyy < 6)
 	{
 		while (yyyy < 4)
 		{
 			printf("%d",first_col_options[yyy][yyyy]);
 			yyyy++;
 		}
 		printf("\n");
 		yyy++;
 		yyyy = 0;
 	}
 }