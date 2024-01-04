/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:45:10 by tafocked          #+#    #+#             */
/*   Updated: 2024/01/04 18:59:11 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	This function copies the string s into a newly allocated string. The string 
	is allocated using malloc. If malloc cannot allocate space for the new 
	string, strdup returns a null pointer. Otherwise it returns a pointer to 
	the new string.
*/

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	length;

	length = ft_strlen(s);
	dest = malloc((length + 1) * sizeof(char));
	if (!dest)
		return (0);
	dest[length] = '\0';
	while (length-- > 0)
		dest[length] = s[length];
	return (dest);
}
