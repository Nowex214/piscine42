/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:42:46 by marvin            #+#    #+#             */
/*   Updated: 2024/09/12 12:42:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_first_word(char *str)
{
    int     i;
    
    i = 0;
    while(str[i] == 32 || str[i] == 9 || str[i] == 10)
    {
        i++;
    }
    while(str[i] != 32 && str[i] != 9 && str[i] != 10)
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
}

int     main(int argc, int *argv)
{
    if(argc == 2)
    {
        ft_first_word(argv[1]);
        return(0);
    }
    else
    {
        ft_putchar('\n');
    }
    return(0);
} 