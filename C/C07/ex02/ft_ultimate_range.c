/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:12:29 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 09:02:45 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*res;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	res = (int *)malloc(sizeof(int) * (size));
	if (res == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = res;
	size = 0;
	while (min < max)
	{
		res[size] = min;
		min++;
		size++;
	}
	return (size);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 1;
	max = 14;
	size = min - max;
	size = ft_ultimate_range(&tab, min, max);
	while (size > i)
	{
		printf("output: %d\n", tab[i]);
		i++;
	}
	free(tab);
}
*/
