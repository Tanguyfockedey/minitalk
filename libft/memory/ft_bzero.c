/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:51:40 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/03 15:51:40 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	This function copies the value "0" into	each of the first size bytes of the 
	object beginning at block.
*/

#include "../libft.h"

void	ft_bzero(void *block, size_t size)
{
	char	*ptr;

	ptr = block;
	while (size--)
		ptr[size] = 0;
}
