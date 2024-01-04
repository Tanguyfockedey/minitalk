/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:14:59 by tafocked          #+#    #+#             */
/*   Updated: 2024/01/04 18:59:33 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strlcpy() function copies strings. It is designed to be safer, more 
	consistent, and less error prone replacements for strncpy(). Unlike this 
	function, strlcpy() takes the full size of the buffer (not just the length) 
	and guarantee to NUL-terminate the result (as long as size is larger 
	than 0).
*/

#include "../libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
