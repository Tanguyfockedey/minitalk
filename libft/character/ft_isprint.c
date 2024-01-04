/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:56:59 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/03 11:56:59 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns true (1) if c is a printing character. Printing characters include 
	all the graphic characters, plus the space (‘ ’) character.
*/

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
