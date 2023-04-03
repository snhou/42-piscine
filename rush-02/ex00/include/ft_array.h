/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:35:29 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/02 22:35:45 by tischmid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAY_H
# define FT_ARRAY_H

char	**partition_right(char *str, int part_size);
int		arr_len(char **arr);
void	free_arr(char **arr);
char	*ft_strjoin(int size, char **strs, char *sep);

#endif
