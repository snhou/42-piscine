/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:25:42 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/02 23:08:50 by tischmid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"
#include "ft_linked_list_helpers.h"
#include "ft_strlib.h"
#include <stdlib.h>

t_map_entry	*ll_map_new_entry(char *key, char *value, t_map_entry *next)
{
	t_map_entry	*new_entry;
	char		*new_value;
	char		*new_key;

	new_value = (char *) malloc(sizeof(char) * (ft_strlen(value) + 1));
	new_key = (char *) malloc(sizeof(char) * (ft_strlen(key) + 1));
	ft_strcpy(new_value, value);
	ft_strcpy(new_key, key);
	new_entry = (t_map_entry *) malloc(sizeof(t_map_entry));
	new_entry->key = new_key;
	new_entry->value = new_value;
	new_entry->next = next;
	return (new_entry);
}

char	*ll_map_get_value(t_map_entry *head, char *key)
{
	t_map_entry	*retval;

	retval = ll_map_get(head, key);
	if (retval)
		return (retval->value);
	else
		return (NULL);
}

void	ll_map_push(t_map_entry *head, char *key, char *value)
{
	t_map_entry	*current;

	if (head != NULL)
	{
		current = head;
		while (current->next != NULL)
			current = current->next;
		current->next = ll_map_new_entry(key, value, NULL);
	}
}

void	ll_clear(t_map_entry *head, int free_data)
{
	if (head != NULL)
	{
		while (head->next != NULL)
			ll_pop_last(head, POP_NO_RETURN_VAL, free_data);
		ll_pop_last(head, POP_NO_RETURN_VAL, free_data);
	}
}
