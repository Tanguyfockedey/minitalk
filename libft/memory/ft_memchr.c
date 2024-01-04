/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:54:49 by tafocked          #+#    #+#             */
/*   Updated: 2024/01/04 18:58:37 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	This function finds the first occurrence of the byte c (converted to an 
	unsigned char) in the initial size bytes of the object beginning at block. 
	The return value is a pointer to the located byte, or a null pointer if no 
	match was found.
*/

#include "../libft.h"

void	*ft_memchr(const void *block, int c, size_t size)
{
	unsigned char	*mem;
	size_t			i;

	mem = (unsigned char *)block;
	i = 0;
	while (i < size)
	{
		if ((unsigned char)c == mem[i])
			return (&mem[i]);
		i++;
	}
	return (0);
}
