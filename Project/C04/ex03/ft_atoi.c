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
    int res;
    int sign;

    res = 0;
    sign = 1;
    while(*str == 32 || (*str >= 9 && *str <= 13))
    {
        str++;
    }
    if(*str == '-')
    {
        sign *= -1;
    }
    if(*str == '-' || *str == '+')
    {
        str++;
    }
    while(*str >= '0' && *str <= '9')
    {
        res = res * 10 + *str - '0';
        str++;
    }
    return(res * sign);
}

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