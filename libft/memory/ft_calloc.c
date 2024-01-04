/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:38:10 by tafocked          #+#    #+#             */
/*   Updated: 2024/01/04 18:58:34 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	This function allocates a block long enough to contain a vector of count 
	elements, each of size eltsize. Its contents are cleared to zero before 
	calloc returns.
*/

#include "../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*block;
	size_t	range;

	range = count * size;
	if (count != 0 && range / count != size)
		return (0);
	block = malloc(range);
	if (!block)
		return (0);
	ft_bzero(block, range);
	return (block);
}
