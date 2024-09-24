/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 08:45:09 by ehenry            #+#    #+#             */
/*   Updated: 2024/09/18 12:12:20 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int a;

    a = 0;
    while(str[a] != '\0')
    {
        if(!(str[a] >= 'a' && str[a] <= 'z'))
            return(0);
        a++;
    }
    return(1);
}
/*
int main()
{
    char str1[] = "hello";

    if(ft_str_is_lowercase(str1))
        printf("'%s' est en minuscule\n", str1);
    else
        printf("'%s' n'est pas en minuscule\n", str1);
    return (0);
}
*/