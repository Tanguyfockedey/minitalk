/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:03:07 by tafocked          #+#    #+#             */
/*   Updated: 2023/04/03 12:03:07 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include "get_next_line/get_next_line_bonus.h"
# include "printf/ft_printf.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/*character*/
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

/*conversion*/
double	ft_atof(const char *string);
int		ft_atoi(const char *string);
char	*ft_itoa(int n);

/*list*/
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

/*memory*/
void	ft_bzero(void *block, size_t size);
void	*ft_calloc(size_t count, size_t eltsize);
void	*ft_memchr(const void *block, int c, size_t size);
int		ft_memcmp(const void *a1, const void *a2, size_t size);
void	*ft_memcpy(void *to, const void *from, size_t size);
void	*ft_memmove(void *to, const void *from, size_t size);
void	*ft_memset(void *block, int c, size_t size);

/*string*/
char	**ft_split(const char *s, char c);
int		ft_str_isint(char *str);
char	*ft_strchr(const char *string, int c);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *string, int c);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_substr(const char *str, size_t start, size_t len);

/*write*/
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);


#endif