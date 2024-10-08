/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 20:20:11 by marvin            #+#    #+#             */
/*   Updated: 2024/09/18 12:07:02 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char			dest[50] = "Hello, ";
	char			src[] = "World!";
	unsigned int	nb;

	nb = 3;
	printf("Avant concaténation : %s\n", dest);
	ft_strncat(dest, src, nb);
	printf("Après concaténation : %s\n", dest);
	return (0);
}
*/
