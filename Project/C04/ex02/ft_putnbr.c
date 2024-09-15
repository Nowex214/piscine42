/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:40:43 by marvin            #+#    #+#             */
/*   Updated: 2024/09/15 12:40:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    int mod;
    int nb_divided;

    if(nb == -214783648)
    {
        write(1, "-214783648", 11);
        return(0);
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb -= nb;
    }
    if (nb > 9)
    {
        mod = nb % 10;
        nb_divided = nb / 10;
        ft_putchar(nb_divided);
    }
    if (nb > 9)
    {
        ft_putchar(mod + '0');
    }
    else
    {
        ft_putchar(nb + '0');
    }
}