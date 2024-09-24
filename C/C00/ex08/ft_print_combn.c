/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:19:48 by marvin            #+#    #+#             */
/*   Updated: 2024/09/09 20:19:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	int i;
	char numbers[n];

	i = 0;
	while (i < n)
	{
		numbers[i] = '0' + i;
		i++;
	}
	write(1, numbers, n);
	write(1, "\n", 1);

	while (1)
	{
		i = n - 1;

		while (i >= 0 && numbers[i] == '9' - (n - 1 - i))
			i--;

		if (i < 0)
			break;
		numbers[i]++;

		while (++i < n)
			numbers[i] = numbers[i - 1] + 1;
		write(1, numbers, n);
		write(1, "\n", 1);
	}
}

int main(void)
{
	ft_print_combn(2); 
	return 0;
}
