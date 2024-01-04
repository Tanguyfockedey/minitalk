/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:07:36 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/21 16:07:36 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef FD_LIMIT
#  define FD_LIMIT 10240
# endif

char	*get_next_line(int fd);
size_t	ft_findeol(char *str);
char	*ft_readfromfd(char *bufjoin, int fd);
char	*ft_getline(char *str);
char	*ft_getendline(char *str);

#endif
