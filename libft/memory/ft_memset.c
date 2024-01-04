/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:51:56 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/03 15:51:56 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	This function copies the value of c (converted to an unsigned char) into 
	each of the first size bytes of the object beginning at block. It returns 
	the value of block.
*/

#include "../libft.h"

void	*ft_memset(void *block, int c, size_t size)
{
	char	*ptr;

	ptr = block;
	while (size--)
		ptr[size] = (unsigned char)c;
	return (block);
}
