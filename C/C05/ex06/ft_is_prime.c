/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:54:12 by ehenry            #+#    #+#             */
/*   Updated: 2024/09/21 13:26:23 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
	{
		return (1);
	}
	if (nb < 2 || nb % 2 == 0)
	{
		return (0);
	}
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}
/*
int	main()
{
	printf("%d\n", ft_is_prime(37));
	return (0);
}
*/
