/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 19:51:36 by cfranco           #+#    #+#             */
/*   Updated: 2018/02/25 19:51:38 by cfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;

	if (lst)
	{
		new = (t_list *)malloc(sizeof(t_list));
		while (lst->next != NULL)
		{
			ft_lstadd(&new, (*f)(lst));
			lst = lst->next;
		}
		ft_lstadd(&new, (*f)(lst));
		return (new);
	}
	return (NULL);
}
