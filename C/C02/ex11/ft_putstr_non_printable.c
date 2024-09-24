/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:54:25 by marvin            #+#    #+#             */
/*   Updated: 2024/09/24 19:54:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_putstr_non_printable(char *str)
{
    unsigned char   i;
    unsigned char   *j;
    char    *hex;

    hex = "0123456789abcdef";
    j = (unsigned char*)str;
    while (*j)
    {
        if (*j >= 32 && *j <= 126 )
            write (1, j, 1);
        else
        {
            ft_putchar ('\\');
            i = *j / 16;
            ft_putchar (hex[i]);
            i = *j % 16;
            ft_putchar (hex[i]);
        }
        j++;
    }    
}

int	main(void)
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}