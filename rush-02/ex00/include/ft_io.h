/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tischmid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 08:52:17 by tischmid          #+#    #+#             */
/*   Updated: 2023/04/01 21:51:56 by tischmid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_H
# define FT_IO_H
# define FILE_READ_ERROR -1
# define LINE_TOO_LONG -2

int	file_readable(char *path);
int	readline(char *buf, int size, char *path, int offset);

#endif
