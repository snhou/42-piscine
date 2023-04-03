/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictparse.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 21:48:18 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/02 18:58:11 by tischmid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTPARSE_H
# define DICTPARSE_H
# define MAX_DIGITS 100
# define MAX_LINE_LENGTH 1000
# include "ft_linked_list.h"

int	parse_line(char *line, char *key, char *value);
int	parse_dict(char *path, t_map_entry *map);

#endif
