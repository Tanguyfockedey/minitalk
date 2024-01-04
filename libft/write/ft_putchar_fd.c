/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:58:01 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/05 14:58:01 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Outputs the character ’c’ to the given file descriptor.
*/

#include "../libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
