/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:28:00 by marvin            #+#    #+#             */
/*   Updated: 2024/09/16 19:28:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     ft_iteractive_factorial(int nb)
{
    int fac;
    int res;

    fac = 1;
    res = 1;

    if(nb < 1)
    {
        return(0);
    }
    while(fac != (nb - 1))
    {
        res *= (fac + 1); // 1 * 2 | 2 * (fac + 1) 3 = 2 * 3 (ça va le faire 10*)
        fac++;
    }
    return(res);
}
/*
int main()
{
    int res = ft_iteractive_factorial(10);
    printf("%d", res);
}
// 10! = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10 = 362.880
*/