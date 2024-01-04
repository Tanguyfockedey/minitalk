/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:51:10 by tafocked          #+#    #+#             */
/*   Updated: 2024/01/04 18:59:25 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates and returns a new string, which is the result of the 
	concatenation of ’s1’ and ’s2’.
*/

#include "../libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*string;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	string = malloc(len * sizeof(char));
	if (!string)
		return (0);
	i = 0;
	while (s1[i])
	{
		string[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		string[i + j] = s2[j];
		j++;
	}
	string[i + j] = '\0';
	return (string);
}
