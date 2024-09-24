/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:09:15 by ehenry            #+#    #+#             */
/*   Updated: 2024/09/18 10:22:25 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int		a;

	a = 0;
	if (!*str)
	{
		return (1);
	}
	while (str[a])
	{
		if (!(str[a] >= 'A'
				&& str[a] <= 'Z'))
		{
			return (0);
		}
		a++;
	}
	return (1);
}
/*
int	main(void)
{
    char str1[] = "Hello";

    
    if(ft_str_is_uppercase(str1))
        printf("'%s' est en majuscule", str1);
    else
        printf("'%s' n'est pas en majuscule", str1);
    return (0);
}
*/
