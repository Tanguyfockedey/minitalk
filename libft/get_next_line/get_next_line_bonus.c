/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:07:27 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/21 16:07:27 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	returns a line read from a file descriptor
*/

#include "get_next_line_bonus.h"

size_t	ft_findeol(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i + 1);
		i++;
	}
	return (0);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*bufjoin[FD_LIMIT];

	if (fd < 0 || fd >= FD_LIMIT || BUFFER_SIZE < 1)
		return (0);
	if (!ft_findeol(bufjoin[fd]))
		bufjoin[fd] = ft_readfromfd(bufjoin[fd], fd);
	if (!bufjoin[fd])
		return (0);
	line = ft_getline(bufjoin[fd]);
	bufjoin[fd] = ft_getendline(bufjoin[fd]);
	return (line);
}
