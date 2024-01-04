/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:48:06 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/05 14:48:06 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Applies the function f to each character of the string passed as argument, 
	and passing its index as first argument. Each character is passed by 
	address to f to be modified if necessary.
*/

#include "../libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	len;
	size_t	i;

	if (!s || !(*f))
		return ;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		(*f)(i, &s[i]);
		i++;
	}
}
