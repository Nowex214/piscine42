/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 20:46:36 by marvin            #+#    #+#             */
/*   Updated: 2024/09/14 20:46:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_strlen(char *str) // calculer la longueur.
{
    int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int src_len;
    unsigned int dest_len;
    unsigned int i;

    src_len = ft_strlen(src); //calcul de la longueur de la chaine source et de la chaine de destination.
    dest_len = ft_strlen(dest);

    if (size <= dest_len) // regarder si il y a assez de place.
        return (src_len + size);

    i = 0;
    while (src[i] && (dest_len + i) < (size - 1)) //on continuer a copier tant qu'on a pas atteint la fin de src.
    {                            //assurer qu'on ne dépasse pas la capacité de dest.
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0'; //ajout caractère nul.

    return (dest_len + src_len); //retour de la longueur totale attendue.
}
/*
int main(void)
{
    char dest[50] = "Hello";
    char src[] = " World!";
    unsigned int size = 50;

    printf("Avant ft_strlcat : %s\n", dest);
    unsigned int result = ft_strlcat(dest, src, size);
    printf("Après ft_strlcat : %s\n", dest);
    printf("Longueur totale de la chaîne : %u\n", result);

    return 0;
}
*/