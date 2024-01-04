/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:21:49 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/27 13:21:49 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_spec_char(char c);
int	ft_spec_string(char *string);
int	ft_spec_pointer(void *p);
int	ft_spec_decimal(int n);
int	ft_spec_unsigned(unsigned int un);
int	ft_spec_hexalower(unsigned int un);
int	ft_spec_hexaupper(unsigned int un);
int	ft_putunbr_base(unsigned long ul, char *base);

#endif
