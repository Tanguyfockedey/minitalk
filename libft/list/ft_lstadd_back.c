/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:15:43 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/05 16:15:43 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Adds the element ’new’ at the end of the list.
*/

#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == 0)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
