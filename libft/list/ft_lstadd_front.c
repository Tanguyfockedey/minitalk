/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:15:48 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/05 16:15:48 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Adds the element ’new’ at the beginning of the list.
*/

#include "../libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
