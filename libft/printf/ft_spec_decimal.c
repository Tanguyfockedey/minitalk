/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_decimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:43:27 by tfockede          #+#    #+#             */
/*   Updated: 2022/03/08 17:43:27 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_spec_decimal(int n)
{
	int				count;
	unsigned int	un;

	if (n < 0)
	{
		un = -n;
		write(1, "-", 1);
		count = 1;
	}
	else
	{
		un = n;
		count = 0;
	}
	count += ft_putunbr_base(un, "0123456789");
	return (count);
}
