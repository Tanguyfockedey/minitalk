/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:29:19 by tfockede          #+#    #+#             */
/*   Updated: 2022/03/08 18:29:19 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_spec_pointer(void *p)
{
	write(1, "0x", 2);
	return (ft_putunbr_base((unsigned long) p, "0123456789abcdef") + 2);
}
