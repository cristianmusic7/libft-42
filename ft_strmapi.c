/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:53:31 by cfranco           #+#    #+#             */
/*   Updated: 2018/02/22 14:53:33 by cfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	int				len;
	unsigned int	i;

	len = ft_strlen(s);
	str = ft_strnew(len);
	i = 0;
	while (*s)
	{
		*str = f(i++, *s++);
		str++;
	}
	return (str -= len);
}
