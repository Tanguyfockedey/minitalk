/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:21:54 by tafocked          #+#    #+#             */
/*   Updated: 2024/01/04 18:59:30 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strlcat() function concatenates strings. It is designed to be safer, 
	more consistent, and less error prone replacements for strncat(). 
	Unlike this function, strlcat() takes the full size of the buffer (not just 
	the length) and guarantee to NUL-terminate the result (as long as there is 
	at least one byte free in dst). 
*/

#include "../libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (size == 0)
		return (ft_strlen(src));
	i = ft_strlen(dest);
	if (size <= i)
		return (size + ft_strlen(src));
	j = 0;
	while (src[j] && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
