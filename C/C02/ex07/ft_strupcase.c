/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:51:39 by ehenry            #+#    #+#             */
/*   Updated: 2024/09/18 12:12:21 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] -= 32;
		a++;
	}
	return (str);
}
/*
int	main(void)
{
    char str1 [] = "jaimelecaca";
    char str2 [] = "42J'AIME LE CACA";
    printf("avant : %s\n", str1);
    ft_strupcase(str1);
    printf("après : %s\n", str1);
    
    printf("avant : %s\n", str2);
    ft_strupcase(str1);
    printf("Apres : %s\n", str2);
    return(0);
}
*/