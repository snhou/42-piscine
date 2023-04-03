/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlib2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 20:49:31 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/02 20:49:40 by tischmid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		++i;
	return (i);
}

int	ft_isspace(char c)
{
	return (c == ' '
		|| c == '\t'
		|| c == '\v'
		|| c == '\n'
		|| c == '\r'
		|| c == '\f');
}

char	*last_non_whitespace(char *ptr)
{
	while (*ptr)
		++ptr;
	while (ft_isspace(*ptr))
		--ptr;
	return (ptr);
}
