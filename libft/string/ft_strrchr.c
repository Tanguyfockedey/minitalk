/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:36:29 by tafocked          #+#    #+#             */
/*   Updated: 2024/01/04 18:59:46 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function strrchr is like strchr, except that it searches backwards from
	the end of the string string (instead of forwards from the front).
*/

#include "../libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	while (i > 0)
	{
		if ((char)c == str[i])
			return ((char *)&str[i]);
		i--;
	}
	if ((char)c == str[0])
		return ((char *)&str[0]);
	return (0);
}
