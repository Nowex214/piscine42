/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:58:48 by ehenry            #+#    #+#             */
/*   Updated: 2024/09/24 11:09:12 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	j;

	j = 0;
	while (j < (size - 1))
	{
		if (tab[j] > tab[j + 1])
		{
			swap = tab[j];
			tab[j] = tab[j +1];
			tab[j + 1] = swap;
			j = 0;
		}
		else
			j++;
	}
}
/*
#include <stdio.h>

void ft_sort_in_tabs(int *tab, int size);

int main(void)
{
    int tab[] = {5, 2, 3, 1, 4, 6};
    int size = sizeof(tab) / sizeof(tab[0]);
    
    printf("Tableau avant le tri : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    ft_sort_in_tabs(tab, size);

    printf("Tableau après le tri : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
*/
