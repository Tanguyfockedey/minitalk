/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:16:17 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/05 16:16:17 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Iterates the list ’lst’ and applies the function ’f’ to the content of 
	each element. Creates a new list resulting of the successive applications 
	of the function ’f’. The ’del’ function is used to delete the content of 
	an element if needed.
*/

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cell;
	t_list	*newlist;

	if (!*f || !*del)
		return (0);
	newlist = 0;
	while (lst)
	{
		cell = ft_lstnew((*f)(lst->content));
		if (!cell)
		{
			ft_lstclear(&newlist, *del);
			return (0);
		}
		ft_lstadd_back(&newlist, cell);
		lst = lst->next;
	}
	return (newlist);
}
