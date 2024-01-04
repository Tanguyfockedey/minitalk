/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:21:38 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/27 13:21:38 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Writes the C string pointed by format to the standard output (stdout). 
	If format includes format specifiers (subsequences beginning with %), 
	the additional arguments following format are formatted and inserted in 
	the resulting string replacing their respective specifiers. cspdiuxX%
*/

#include "ft_printf.h"

static int	ft_specifier(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_spec_char(va_arg(args, int));
	else if (c == 's')
		count = ft_spec_string(va_arg(args, char *));
	else if (c == 'p')
		count = ft_spec_pointer(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		count = ft_spec_decimal(va_arg(args, int));
	else if (c == 'u')
		count = ft_spec_unsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		count = ft_spec_hexalower(va_arg(args, unsigned int));
	else if (c == 'X')
		count = ft_spec_hexaupper(va_arg(args, unsigned int));
	else if (c == '%')
		count = write(1, &c, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, format);
	count = 0;
	i = -1;
	while (format[++i])
	{
		if (format[i] != '%')
			count += write(1, &format[i], 1);
		else
			count += ft_specifier(format[++i], args);
	}
	va_end(args);
	return (count);
}
