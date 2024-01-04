/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:17:53 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/05 13:17:53 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates and returns an array of strings obtained by splitting ’s’ using 
	the character ’c’ as a delimiter. 
	The array must be ended by a NULL pointer.
*/

#include "../libft.h"

static size_t	ft_substr_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if ((c == '\0') && (s[0] != '\0'))
		return (1);
	if ((c == '\0') && (s[0] == '\0'))
		return (0);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		count++;
		while (s[i] && (s[i] != c))
			i++;
		while (s[i] == c)
			i++;
	}
	return (count);
}

static char	*ft_next_substr(char *s, char c, char **newstr)
{
	size_t	i;

	while (s[0] == c)
		s++;
	i = 0;
	while (s[i] && (s[i] != c))
		i++;
	newstr[0] = ft_substr(s, 0, i);
	return (&s[i]);
}

static void	*ft_free(char **result, size_t i)
{
	while (i-- > 0)
	{
		free(result[i]);
	}
	free(result);
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	size_t	substr_count;
	size_t	i;

	if (!s)
		return (0);
	substr_count = ft_substr_count(s, c);
	tab = malloc((substr_count + 1) * sizeof(char *));
	if (!tab)
		return (0);
	tab[substr_count] = NULL;
	i = 0;
	while (i < substr_count)
	{
		s = ft_next_substr((char *)s, c, &tab[i]);
		if (!tab[i])
			return (ft_free(tab, i));
		i++;
	}
	return (tab);
}
