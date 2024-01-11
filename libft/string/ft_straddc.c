/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_straddc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:39:04 by tafocked          #+#    #+#             */
/*   Updated: 2024/01/11 20:28:22 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
	Allocates and return a new string which is the concatenation of the 
	character c to the string str, freeing the input string.
*/

static char	*ft_stradd_first(char c)
{
	char	*new;

	new = malloc(2 * sizeof(char));
	if (!new)
		return (0);
	new[0] = c;
	new[1] = '\0';
	return (new);
}

char	*ft_straddc(char *str, char c)
{
	char	*new;
	int		i;

	if (!c)
		return (0);
	if (!str)
		return (ft_stradd_first(c));
	new = malloc((ft_strlen(str) + 2) * sizeof(char));
	if (!new)
	{
		free(str);
		return (0);
	}
	i = -1;
	while (str[++i])
		new[i] = str[i];
	new[i] = c;
	new[++i] = '\0';
	free(str);
	return (new);
}
