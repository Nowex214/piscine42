/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:52:34 by marvin            #+#    #+#             */
/*   Updated: 2024/09/12 18:52:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int     i;
    i = 0;
    while(s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    return(s1);
}

int     main(void)
{
    char str1[] = "Hello";
    char str2[] = "world";

    printf("%s\n", str1);
    ft_strcpy(str1, str2);
    printf("%s\n", str2);
    return(0);
}