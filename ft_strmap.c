/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:45:37 by cfranco           #+#    #+#             */
/*   Updated: 2018/02/22 14:45:39 by cfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		len;

	len = ft_strlen(s);
	str = ft_strnew(len);
	while (*s)
	{
		*str = f(*s++);
		str++;
	}
	return (str -= len);
}
