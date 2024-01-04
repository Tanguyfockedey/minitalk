/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:02:21 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/03 15:02:21 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function memcmp compares the size bytes of memory beginning at a1 
	against the size bytes of memory beginning at a2. The value returned has 
	the same sign as the difference between the first differing pair of bytes 
	(interpreted as unsigned char objects, then promoted to int).
	If the contents of the two blocks are equal, memcmp returns 0.
*/

#include "../libft.h"

int	ft_memcmp(const void *a1, const void *a2, size_t size)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)a1;
	s2 = (unsigned char *)a2;
	i = 0;
	if (size == 0)
		return (0);
	while (i < size - 1)
	{
		if (s1[i] != s2[i])
			return ((int)(s1[i] - s2[i]));
		i++;
	}
	return ((int)(s1[i] - s2[i]));
}
