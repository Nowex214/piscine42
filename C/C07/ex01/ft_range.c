/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:12:25 by marvin            #+#    #+#             */
/*   Updated: 2024/09/22 17:20:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*res;

	if (min >= max)
		return (0);

	size = max - min;
	res = (int *)malloc(sizeof(int) * (size));
	if (res == NULL)
		return (NULL);
	size = 0;
	while (min < max)
	{
		res[size] = min;
		min++;
		size++;
	}
	return (res);
}

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
	size = max - min;
	tab = ft_range(min,max);
	while (size > i)
	{
		printf("output: %d\n", tab[i]);
		i++;
	}
}

