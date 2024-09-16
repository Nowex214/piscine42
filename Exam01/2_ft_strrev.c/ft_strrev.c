/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.C                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:23:00 by marvin            #+#    #+#             */
/*   Updated: 2024/09/12 14:23:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


char    *ft_strrev(char *str)
{
    int i;
    int j;
    char temp;

    i = 0;
    j = 0;

    while(str[i] != '\0')
    {
        i++;
    }
    i--;

    while(j < i)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
        i--;
    }
    return(str);
}

int main() {
    char str[] = "Hello, world!";
    printf("Original: %s\n", str);
    ft_strrev(str);
    printf("Reversed: %s\n", str);
    return 0;
}