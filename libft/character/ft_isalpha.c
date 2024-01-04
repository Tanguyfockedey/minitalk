/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:52:03 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/03 11:53:54 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns true (1) if c is an alphabetic character (a letter).
*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
