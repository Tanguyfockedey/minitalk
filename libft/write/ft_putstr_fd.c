/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:00:26 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/05 15:00:26 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Outputs the string ’s’ to the given file descriptor.
*/

#include "../libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
