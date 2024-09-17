/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:14:04 by marvin            #+#    #+#             */
/*   Updated: 2024/09/16 14:14:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int res; // stock le résultat final.
    int sign; // le nbr est d'office positif.

    res = 0;
    sign = 1;
    while(*str == 32 || (*str >= 9 && *str <= 13)) // ne prends pas en compte tous les caractères de "controle".
    {
        str++;
    }
    if(*str == '-')
    {
        sign *= -1; // si le caractère est négatif, il multiplie sign * -1;
    }
    if(*str == '-' || *str == '+')
    {
        str++; // si le caractère est - || +, le *str est avancé jusqu'au prochain caractère.
    }
    while(*str >= '0' && *str <= '9') // parcourt la chaine tant qu'ils sont des chiffres.
    {
        res = res * 10 + *str - '0'; // est converti en entier - 0 de sa valeur ascii.
        str++;
    }
    return(res * sign); // le res est * par sign et est retourné.
}
/*
int main(int ac, char **av)
{
    int mine;
    int theirs;

    if(ac == 2)
    {
        mine = ft_atoi(av[1]);
        theirs = ft_atoi(av[1]);
        printf("mine: %d | theirs: %d\n", mine, theirs);
    }
    return(0);
}
*/