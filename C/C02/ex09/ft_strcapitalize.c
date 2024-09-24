/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:58:13 by ehenry            #+#    #+#             */
/*   Updated: 2024/09/18 10:25:38 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			str[a] += 32;
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	start_word;

	a = 0;
	start_word = 1;
	ft_lowercase(str);
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if (start_word == 1)
				str[a] -= 32;
			start_word = 0;
		}
		else if (str[a] >= '0' && str[a] <= '9')
			start_word = 0;
		else
			start_word = 1;
		a++;
	}
	return (str);
}

/*
int main()
{
    char phrase1[] = "bonjour tout le monde.";
    char phrase2[] = "salut, comment ca va? 42 est un nombre.";

    // Affichage avant transformation
    printf("Avant lowercase : %s\n", phrase1);

    // Transformation en minuscule
    ft_lowercase(phrase1);
    printf("Après lowercase : %s\n", phrase1);

    // Affichage avant capitalisation
    printf("Avant capitalisation : %s\n", phrase2);

    // Capitalisation des mots
    ft_strcapitalize(phrase2);
    printf("Après capitalisation : %s\n", phrase2);

    return 0;
}
*/
