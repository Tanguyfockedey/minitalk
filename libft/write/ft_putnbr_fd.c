/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:03:26 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/05 15:03:26 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Outputs the integer ’n’ to the given file descriptor.
*/

#include "../libft.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	unb;

	if (n < 0)
		ft_putchar('-', fd);
	if (n < 0)
		unb = -n;
	else
		unb = n;
	if (unb > 9)
	{
		ft_putnbr_fd(unb / 10, fd);
		unb = unb % 10;
	}
	ft_putchar('0' + unb, fd);
}
