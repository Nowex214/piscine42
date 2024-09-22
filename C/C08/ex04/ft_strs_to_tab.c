/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tabs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:33:30 by marvin            #+#    #+#             */
/*   Updated: 2024/09/22 17:33:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int i;
    int len;
    char *dest;

    len = 0;
    while (src[len])
        len++;
    dest = (char *)malloc((len + 1) * sizeof(char));
    if (dest == NULL)
        return (NULL);
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *stock_str;
    int i;

    stock_str = malloc(sizeof(t_stock_str) * (ac + 1));
    if (!stock_str)
        return (NULL);
    i = 0;
    while (ac > i)
    {
        stock_str[i].str = av[i];
        stock_str[i].copy = ft_strdup(av[i]);
        stock_str[i].size = ft_strlen(av[i]);
        i++;
    }
    stock_str[i].str = 0;
    return (stock_str);
}

int main(int ac, char **av)
{
    int index;
    struct s_stock_str  *structs;
    
    structs = ft_strs_to_tab(ac, av);
    index = 0;
    while (index < ac)
    {
        printf("%d\n", index);
        printf("\t orignal one : $%s$ @ %p\n", structs[index].str, structs[index].str);
        printf("\t copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t size : %d\n", structs[index].size);
        index++;
    }
    
    int i = 0;
    while (ac > i)
    {
        free(structs[i].copy);
        i++;
    }
    free (structs);
    return (0);
}