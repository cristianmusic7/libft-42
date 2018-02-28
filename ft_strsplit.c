/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhouser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 11:59:54 by mhouser           #+#    #+#             */
/*   Updated: 2017/09/29 12:00:00 by mhouser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void str_list_freeer(struct string *str_list)
{
    if((*str_list).count != -1)
        str_list_freeer((*str_list).next);
    free(str_list);
}

void ft_str_arr_builder(char **str_arr, struct string *str_list)
{
    while (*str_arr)
    {
        *str_arr++ = (*str_list).str;
        str_list = (*str_list).next;
    }
}

int ft_strlink(char *s, struct string *current_str, struct string **mod_pnt, char delimiter)
{
    int length;
    int offset;
    int sled;

    length = 0;
    sled = 0;
    while (*s++ == delimiter)
        sled++;
    s--;
    if(!*s)
        return(sled + 1);
    while (s[length++] != delimiter && s[length - 1]);
    (*current_str).next = (struct string *)malloc(sizeof(struct string));
    (*(*current_str).next).count = (*current_str).count + 1;
    (*current_str).str = malloc(sizeof(char) * length);
    offset = length;
    while(--length)
        *(*current_str).str++ = *s++;
    *(*current_str).str = '\0';
    (*current_str).str = ((*current_str).str - (offset - 1));
    *mod_pnt = (*current_str).next;
    return(offset + sled);
}

char        **ft_strsplit(char const *s, char c)
{
    char **str_arr;
    struct string *str_list;
    struct string *current_str;
    struct string **mod_pnt;
    int offset;

    current_str = (struct string *)malloc(sizeof(struct string));
    (*current_str).count = 0;
    str_list = current_str;
    mod_pnt = &current_str;
    while(s && *(char *)s)
    {
        if (*(char *)s++ == c || str_list == current_str)
        {
            offset = ft_strlink((char *)--s, current_str, mod_pnt, c);
            s = s + (offset - 1);
        }
    }
    str_arr = (char **)malloc(sizeof(char *) * ((*current_str).count + 1));
    str_arr[(*current_str).count] = 0;
    while((*current_str).count--)
        str_arr[(*current_str).count] = (char *)current_str;
    ft_str_arr_builder(str_arr, str_list);
    str_list_freeer(str_list);
    return(str_arr);
}
//