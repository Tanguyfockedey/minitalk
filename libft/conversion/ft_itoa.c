/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:25:49 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/05 14:25:49 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates and returns a string representing the integer received as an 
	argument. Negative numbers must be handled.
*/

#include "../libft.h"

static unsigned int	ft_intlen(int n)
{
	unsigned int	intlen;
	unsigned int	un;

	intlen = 1;
	un = n;
	if (n < 0)
	{
		un = -n;
		intlen++;
	}
	while (un > 9)
	{
		un /= 10;
		intlen++;
	}
	return (intlen);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	len;
	unsigned int	un;

	un = n;
	if (n < 0)
		un = -n;
	len = ft_intlen(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = '\0';
	while (len-- > 0)
	{
		str[len] = '0' + un % 10;
		un /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
