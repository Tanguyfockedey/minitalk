/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:36:00 by tafocked          #+#    #+#             */
/*   Updated: 2024/01/04 18:57:20 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The atof function converts a string to a signed float, 
	which is returned as a value of type double float.
*/

#include "../libft.h"

static int	ft_prestr(char *str, char *sign)
{
	int	i;

	*sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			*sign = -1;
	return (i);
}

double	ft_atof(const char *string)
{
	int		i;
	char	sign;
	double	nb;
	double	div;

	nb = 0;
	div = 0.1;
	i = ft_prestr((char *)string, &sign);
	while (ft_isdigit(string[i]))
		nb = nb * 10. + string[i++] - '0';
	if (string[i] == '.')
		i++;
	while (ft_isdigit(string[i]))
	{
		nb = nb + div * (string[i] - '0');
		div /= 10;
		i++;
	}
	return (nb * sign);
}
