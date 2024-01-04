/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:16:04 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/05 16:16:04 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Takes as a parameter an element and frees the memory of the element’s 
	content using the function ’del’ given as a parameter and free the element.
	The memory of ’next’ must not be freed.
*/

#include "../libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !*del)
		return ;
	(*del)(lst->content);
	free(lst);
}
