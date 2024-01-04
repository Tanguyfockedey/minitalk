/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:50:43 by tafocked          #+#    #+#             */
/*   Updated: 2024/01/04 18:57:24 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The atoi function converts the initial part of string to a signed integer, 
	which is returned as a value of type int.
*/

#include "../libft.h"

static char	*ft_prestr(char *str, char *sign)
{
	size_t	i;

	*sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			*sign *= -1;
	}
	return (&str[i]);
}

int	ft_atoi(const char *string)
{
	char	sign;
	char	*str;
	int		i;
	size_t	unb;
	size_t	mult10;

	i = 0;
	unb = 0;
	mult10 = 1;
	str = ft_prestr((char *)string, &sign);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (i > 0)
	{
		i--;
		unb = unb + (str[i] - '0') * mult10;
		mult10 *= 10;
	}
	return (sign * unb);
}
