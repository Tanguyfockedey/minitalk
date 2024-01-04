/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:29:59 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/03 14:31:03 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	If c is a lower-case letter, toupper returns the corresponding upper-case 
	letter. Otherwise c is returned unchanged.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
