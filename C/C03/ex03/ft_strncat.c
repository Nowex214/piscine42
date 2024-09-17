/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 20:20:11 by marvin            #+#    #+#             */
/*   Updated: 2024/09/14 20:20:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    unsigned int j;

    i = 0;
    j = 0;
    while(dest[i]) //trouver où s'arrête la chaine.
    {
        i++;
    }
    j = 0;
    while(src[j] && j < nb) //copier les caractères de src vers dest.
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0'; //ajout du caractères nul pour marquer la fin de la chaine.
    return (0);
}
/*
int main(void)
{
    char dest[50] = "Hello, ";
    char src[] = "World!";
    unsigned int nb = 3;

    printf("Avant concaténation : %s\n", dest);

    ft_strncat(dest, src, nb);
    
    printf("Après concaténation : %s\n", dest);
    
    return 0;
}
*/