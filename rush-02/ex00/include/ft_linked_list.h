/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:25:59 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/02 23:09:41 by tischmid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LINKED_LIST_H
# define FT_LINKED_LIST_H

typedef struct s_map_entry
{
	char				*key;
	char				*value;
	struct s_map_entry	*next;
}	t_map_entry;

typedef enum e_ret_flag
{
	POP_NO_RETURN_VAL
}	t_ret_flag;

char		*ll_map_get_value(t_map_entry *head, char *key);
void		ll_map_push(t_map_entry *head, char *key, char *value);
void		ll_clear(t_map_entry *head, int free_data);
t_map_entry	*ll_map_new_entry(char *key, char *value, t_map_entry *next);
t_map_entry	*ll_pop_last(t_map_entry *head, t_ret_flag noretval, int free_data);

#endif
