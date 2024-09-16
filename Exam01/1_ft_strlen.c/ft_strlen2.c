/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:02:50 by marvin            #+#    #+#             */
/*   Updated: 2024/09/12 19:02:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int     i;
    
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}
/*
int     main()
{
    char str1[] = "Hello World!";
    char str2[] = "L'école 42 c'est trop bien";
    
    printf("La longueur de %s est de : %d\n", str1, ft_strlen(str1));
    printf("La longueur de '%s' est de : %d\n", str2, ft_strlen(str2));
    return(0);
}
*/