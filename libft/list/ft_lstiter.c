/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:16:09 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/05 16:16:09 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Iterates the list ’lst’ and applies the function ’f’ to the content of 
	each element.
*/

#include "../libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !*f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
