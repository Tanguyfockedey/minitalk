/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:55:11 by tafocked          #+#    #+#             */
/*   Updated: 2024/01/04 18:59:49 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates and returns a copy of ’s1’ with the characters specified in ’set’
	removed from the beginning and the end of the string.
*/

#include "../libft.h"

static size_t	ft_pretrim(const char *str, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (set[i])
	{
		if (set[i] == str[j])
		{
			j++;
			i = 0;
			continue ;
		}
		i++;
	}
	return (j);
}

static size_t	ft_endtrim(const char *str, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(str);
	i = 0;
	j = len;
	while (set[i] && j)
	{
		if (set[i] == str[j - 1])
		{
			j--;
			i = 0;
			continue ;
		}
		i++;
	}
	return (len - j);
}

static char	*ft_copy(const char *str, size_t len)
{
	char	*string;

	string = malloc((len + 1) * sizeof(char));
	if (!string)
		return (0);
	string[len] = '\0';
	while (len-- > 0)
		string[len] = str[len];
	return (string);
}

char	*ft_strtrim(const char *s, const char *set)
{
	char	*string;
	size_t	pretrim;
	size_t	endtrim;
	size_t	len;

	if (!s)
		return (0);
	if (!set)
		return (ft_strdup(s));
	len = ft_strlen(s);
	pretrim = ft_pretrim(s, set);
	endtrim = ft_endtrim(s, set);
	if (pretrim + endtrim >= len)
		string = ft_strdup("");
	else
		string = ft_copy(&s[pretrim], len - pretrim - endtrim);
	return (string);
}
