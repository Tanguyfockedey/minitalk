/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:55:55 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/03 11:55:55 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns true (1) if c is a 7-bit unsigned char value that fits into the 
	US/UK ASCII character set.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
