/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 04:32:47 by cfranco           #+#    #+#             */
/*   Updated: 2018/01/19 04:32:51 by cfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_swap(int *a, int *b);
void				ft_putstr(char *str);
int					ft_strlen(const char *str);
int					ft_strcmp(char *s1, char *s2);
void				*ft_memcpy(void *dst, const void *src, size_t n);
char				*ft_strnew(size_t size);
t_list				*ft_lstnew(void *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);

#endif
