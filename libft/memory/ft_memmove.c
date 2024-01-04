/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:05:07 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/03 14:05:07 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memmove copies the size bytes at from into the size bytes at to, even if 
	those two blocks of space overlap. In the case of overlap, memmove is 
	careful to copy the original values of the bytes in the block at from, 
	including those bytes which also belong to the block at to.
	The value returned by memmove is the value of to.
*/

#include "../libft.h"

void	*ft_memmove(void *to, const void *from, size_t size)
{
	char	*tmp_to;
	char	*tmp_from;

	if (to == from)
		return (to);
	tmp_to = (char *)to;
	tmp_from = (char *)from;
	if (to < from)
		to = ft_memcpy(to, from, size);
	else
	{
		while (size--)
			tmp_to[size] = tmp_from[size];
	}
	return (to);
}
