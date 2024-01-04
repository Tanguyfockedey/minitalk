/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:22:05 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/27 13:22:05 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_spec_string(char *string)
{
	int	strlen;

	if (string)
	{
		strlen = ft_strlen(string);
		write(1, string, strlen);
		return (strlen);
	}
	else
	{
		write(1, "(null)", 6);
		return (6);
	}
}
