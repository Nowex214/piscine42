/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:35:48 by marvin            #+#    #+#             */
/*   Updated: 2024/09/12 14:35:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    ft_rot13(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if((str[i] >= 'a' || str[i] <= 'z') || (str[i] >= 'A' || str[i] <= 'Z'))
        {
            str[i] += 13;
        }
        i++;
    }
    return(1);
}
int main() {
    char str[] = "Hello, World!";

    ft_rot13(str);

    int i = 0;
    while (str[i] != '\0') {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');

    return 0;
}