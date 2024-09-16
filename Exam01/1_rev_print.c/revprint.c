/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:29:41 by marvin            #+#    #+#             */
/*   Updated: 2024/09/12 12:29:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    ft_strlen(char *str)
{
    int     i;

    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}
char    *ft_rev_print(char *str)
{
    int     i;  

    i = ft_strlen(str);
    i--;
    while(i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
    return(str);
}

int     main()
{
    char str[] = "Hello";
    ft_rev_print(str);
    return(0);
}