/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:11:54 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/03 12:11:54 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strlen function returns the length of the string str in bytes.
*/

#include "../libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
