/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_hexalower.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:01:10 by tfockede          #+#    #+#             */
/*   Updated: 2022/03/08 19:01:10 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_spec_hexalower(unsigned int un)
{
	return (ft_putunbr_base(un, "0123456789abcdef"));
}
