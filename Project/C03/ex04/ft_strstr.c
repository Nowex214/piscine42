/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 20:30:26 by marvin            #+#    #+#             */
/*   Updated: 2024/09/14 20:30:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if(ft_strlen(to_find) < 1)
    {
        return(str);
    }
    i = 0;
    while(str[i])
    {
        j = 0;
        while(to_find[j])
        {
            if(str[i + j] == to_find[j])
            {
                if(to_find[j + 1] != '\0')
                {
                    return(str[i]);
                }
                else
                {
                    break ;
                }
            }
            j++;
        }
        i++;
    }
    return(0);
}

#include <stdio.h>

/*
int main(void)
{
    char str[] = "Hello, World!";
    char to_find[] = "World";
    char not_found[] = "Foo";
    char *result;

    printf("Longueur de \"%s\" : %d\n", str, ft_strlen(str));

    result = ft_strstr(str, to_find);
    if (result)
    {
        printf("Chaîne trouvée : \"%s\"\n", result);
    }
    else
    {
        printf("Chaîne \"%s\" non trouvée.\n", to_find);
    }

    result = ft_strstr(str, not_found);
    if (result)
    {
        printf("Chaîne trouvée : \"%s\"\n", result);
    }
    else
    {
        printf("Chaîne \"%s\" non trouvée.\n", not_found);
    }

    return 0;
}
*/