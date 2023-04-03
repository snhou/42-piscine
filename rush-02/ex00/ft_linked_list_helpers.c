/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list_helpers.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:25:42 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/02 20:12:19 by tischmid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list_helpers.h"
#include "ft_linked_list.h"
#include "ft_strlib.h"
#include <stdlib.h>

void	free_entry(t_map_entry *entry)
{
	free(entry->key);
	free(entry->value);
	free(entry);
}

t_map_entry	*ll_pop_last(t_map_entry *head, t_ret_flag noretval, int free_data)
{
	t_map_entry	*current;
	t_map_entry	*retval;

	retval = NULL;
	if (head == NULL)
		return (retval);
	if (head->next == NULL)
	{
		if (noretval != POP_NO_RETURN_VAL)
			retval = ll_map_new_entry(head->key, head->value, NULL);
		if (free_data)
			free_entry(head);
		return (retval);
	}
	current = head;
	while (current->next->next != NULL)
		current = current->next;
	if (noretval != POP_NO_RETURN_VAL)
		retval = ll_map_new_entry(current->next->key,
				current->next->value,
				NULL);
	if (free_data)
		free_entry(current->next);
	current->next = NULL;
	return (retval);
}

int	ll_map_set_value(t_map_entry *head, char *key, char *value)
{
	t_map_entry	*current;

	current = ll_map_get(head, key);
	if (current != NULL)
	{
		free(current->value);
		current->value = malloc(sizeof(char) * (ft_strlen(value) + 1));
		ft_strcpy(current->value, value);
		return (1);
	}
	else
		return (0);
}

t_map_entry	*ll_map_get(t_map_entry *head, char *key)
{
	t_map_entry	*current;

	if (head != NULL)
	{
		current = head;
		while (current != NULL)
		{
			if (!ft_strcmp(current->key, key))
				return (current);
			current = current->next;
		}
	}
	return (NULL);
}
