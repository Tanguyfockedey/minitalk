/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:41:03 by tafocked          #+#    #+#             */
/*   Updated: 2024/01/04 18:59:40 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strncmp function compares the size first bytes of string s1 against s2, 
	returning a value that has the same sign as the difference between the 
	first differing pair of bytes (interpreted as unsigned char objects, then 
	promoted to int).
	If the two strings are equal, strncmp returns 0.
*/

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	while (s1[i] && i < size - 1)
	{
		if (s1[i] != s2[i])
			return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
}
