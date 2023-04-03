/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list_helpers.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:25:59 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/02 23:09:21 by tischmid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LINKED_LIST_HELPERS_H
# define FT_LINKED_LIST_HELPERS_H
# include "ft_linked_list.h"

t_map_entry	*ll_map_get(t_map_entry *head, char *key);
t_map_entry	*ll_pop_last(t_map_entry *head, t_ret_flag noretval, int free_data);
void		free_entry(t_map_entry *entry);
int			ll_map_set_value(t_map_entry *head, char *key, char *value);

#endif
