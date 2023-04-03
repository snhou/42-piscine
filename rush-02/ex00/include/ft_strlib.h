/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 07:14:29 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/02 21:18:30 by tischmid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRLIB_H
# define FT_STRLIB_H
# include <unistd.h>
# include "colors.h"
# include "ft_strlib2.h"

char			*ft_strcpy(char *dest, char *src);
int				ft_strcmp(char *s1, char *s2);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char			*ft_strcat(char *dest, char *src);

#endif
