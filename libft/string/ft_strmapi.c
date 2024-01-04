/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:34:07 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/05 14:34:07 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Applies the function ’f’ to each character of the string ’s’, and passing 
	its index as first argument to create a new string (with malloc) resulting 
	from successive applications of ’f’.
*/

#include "../libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	if (!s || !(*f))
		return (0);
	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = '\0';
	i = 0;
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
