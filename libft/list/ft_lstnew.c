/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:16:22 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/05 16:16:22 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates and returns a new element. The variable ’content’ is initialized
	with the value of the parameter ’content’. The variable ’next’ is 
	initialized to NULL.
*/

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*cell;

	cell = malloc(sizeof(t_list));
	if (!cell)
		return (0);
	cell->content = content;
	cell->next = 0;
	return (cell);
}
