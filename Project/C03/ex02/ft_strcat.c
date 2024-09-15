/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:33:23 by marvin            #+#    #+#             */
/*   Updated: 2024/09/14 19:33:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i= 0;
    while(dest[i])
        i++;
    j = 0;
    while(src[i])
        dest[i + j] = src[i];
        j++;
    dest[i + j] = '\0';
    return(dest);
}
/*
int main()
{
    char dest[5] = "Hello";
    char src[] = "Helli";
    
    printf("Avant concaténation : %s\n", dest);
    ft_strcat(dest, src);
    printf("Après concaténation : %s\n", dest);
    return 0;
}
*/