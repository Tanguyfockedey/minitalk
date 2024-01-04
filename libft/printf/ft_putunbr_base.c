/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:30:25 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/27 13:30:25 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Converts the given unsigned decimal number to different base and displays 
	it on the standard output.
*/

#include "ft_printf.h"

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static void	ft_basechange(unsigned long ul, char *base,
							unsigned int baselength, int *count)
{
	if (ul > baselength - 1)
	{
		ft_basechange(ul / baselength, base, baselength, count);
		ul %= baselength;
	}
	write(1, &base[ul], 1);
	*count += 1;
}

int	ft_putunbr_base(unsigned long ul, char *base)
{
	int	count;

	count = 0;
	ft_basechange(ul, base, ft_strlen(base), &count);
	return (count);
}
