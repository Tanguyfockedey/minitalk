/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:31:13 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/03 14:31:36 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	If c is an upper-case letter, tolower returns the corresponding lower-case 
	letter. If c is not an upper-case letter, c is returned unchanged.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
