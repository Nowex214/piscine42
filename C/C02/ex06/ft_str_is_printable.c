/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:19:34 by ehenry            #+#    #+#             */
/*   Updated: 2024/09/18 09:41:49 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int		a;

	a = 0;
	while (str[a])
	{
		if (!(str[a] >= 32 && str[a] <= 126))
			return (0);
		a++;
	}
	return (1);
}
/*
int	main(void)
{
    char str1[] = "hello";

    if(ft_str_is_printable(str1))
        printf("'%s' est printable", str1);
    else
        printf("'%s' n'est pas printable", str1);
    return(0);
}
*/