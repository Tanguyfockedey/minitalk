/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:07:48 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/21 16:07:48 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static size_t	ft_strlen(const char *str, int eol)
{
	size_t	i;

	i = 0;
	if (eol)
	{
		while (str[i] && str[i] != '\n')
			i++;
		if (str[i] == '\n')
			i++;
	}
	else
		while (str[i])
			i++;
	return (i);
}

static char	*ft_bufjoin(char *s1, const char *s2)
{
	char	*string;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = malloc(sizeof(char));
		if (!s1)
			return (0);
		s1[0] = '\0';
	}
	if (!s2)
		return (0);
	string = malloc((ft_strlen(s1, 0) + ft_strlen(s2, 0) + 1) * sizeof(char));
	if (!string)
		return (0);
	i = -1;
	while (s1[++i])
		string[i] = s1[i];
	j = -1;
	while (s2[++j])
		string[i + j] = s2[j];
	string[i + j] = '\0';
	free(s1);
	return (string);
}

char	*ft_readfromfd(char *bufjoin, int fd)
{
	int		eol_eof;
	char	*buf;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (0);
	eol_eof = 1;
	while (eol_eof)
	{
		eol_eof = read(fd, buf, BUFFER_SIZE);
		if (eol_eof < 0)
		{
			free(buf);
			return (0);
		}
		buf[eol_eof] = '\0';
		bufjoin = ft_bufjoin(bufjoin, buf);
		if (ft_strlen(buf, 1) != BUFFER_SIZE || buf[BUFFER_SIZE - 1] == '\n')
			eol_eof = 0;
	}
	free(buf);
	return (bufjoin);
}

char	*ft_getline(char *str)
{
	char	*line;
	size_t	len;
	size_t	i;

	if (!str[0])
		return (0);
	len = ft_strlen(str, 1);
	line = malloc((len + 1) * sizeof(char));
	if (!line)
		return (0);
	i = -1;
	while (++i < len)
		line[i] = str[i];
	line[len] = '\0';
	return (line);
}

char	*ft_getendline(char *str)
{
	int		start;
	int		len;
	char	*newstr;

	start = ft_findeol(str);
	if (!start)
	{
		free(str);
		return (0);
	}
	len = ft_strlen(&str[start], 0);
	newstr = malloc((len + 1) * sizeof(char));
	if (!newstr)
		return (0);
	newstr[len] = '\0';
	while (len--)
		newstr[len] = str[start + len];
	free (str);
	return (newstr);
}
