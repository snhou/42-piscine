/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shou <shou@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:58:35 by shou              #+#    #+#             */
/*   Updated: 2023/03/19 17:43:31 by shou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//int g_nums[10];
//void    ft_putchar(char c)
//{
//    write(1, &c, 1);
//}
//void    dfs(int depth, int n, int min, int max)
//{
//    int i;
//    if (depth == n)
//    {
//        i = 0;
//        while (i < depth)
//        {
//            ft_putchar(g_nums[i]);
//            i++;
//        }
//        if (g_nums[0] != (10 - n + '0') || g_nums[n - 1] != '9')
//            write(1, ", ", 2);
//    }
//    else
//    {
//        i = min;
//        while (i <= max)
//        {
//            g_nums[depth] = i + '0';
//            dfs(depth + 1, n, i + 1, max);
//            i++;
//        }
//    }
//}
//void    ft_print_combn(int n)
//{
//    dfs(0, n, 0, 9);
//}
//int main()
//{
//    ft_print_combn(2);
//    ft_putchar('\n');
//}
