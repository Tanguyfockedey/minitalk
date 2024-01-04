/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:15:53 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/05 16:15:53 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Deletes and frees the given element and every successor of that element, 
	using the function ’del’ and free().
	Finally, the pointer to the list must be set to NULL.
*/

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !(*lst) || !(*del))
		return ;
	if ((*lst)->next)
		ft_lstclear(&(*lst)->next, del);
	ft_lstdelone(*lst, del);
	*lst = 0;
}
