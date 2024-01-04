/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_hexaupper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:05:25 by tfockede          #+#    #+#             */
/*   Updated: 2022/03/08 19:05:25 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_spec_hexaupper(unsigned int un)
{
	return (ft_putunbr_base(un, "0123456789ABCDEF"));
}
