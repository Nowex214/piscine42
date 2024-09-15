/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:15:15 by marvin            #+#    #+#             */
/*   Updated: 2024/09/14 19:15:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while(s1[i] && s2[i] && s1[i] == s2[i] && i < (n -1))
    {
        i++;
    }
    if(n < 1)
    {
        return 0;
    }
    return((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main(void)
{
    char *str1 = "Hello";
    char *str2 = "Helli";
    unsigned int    n;

    int result;
    n = 5;
    result = ft_strncmp(str1,str2, n);
    printf("Comparaison de \"%s\" et \"%s\" avec n=%u : %d\n", str1, str2, n, result);
    return 0;
}
*/