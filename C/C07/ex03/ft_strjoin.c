/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:12:32 by marvin            #+#    #+#             */
/*   Updated: 2024/09/22 17:20:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int	i;
	int	j;
	int	k;

	if (size == 0)
	{
		char *s = (char *)malloc(1);
		if (s)
			s[0] = '\0';
		return (s);
	}
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			s[k++] = strs [i][j++];
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			s[k++] = sep[j++];
		}
		i++;
	}
	s[k] = '\0';
	return (s);
}


int	main(void)
{
	char *text[10];

	text[0] = "Hello";
	text[1] = "a";
	text[2] = "World";
	text[3] = "Piscine";
	text[4] = "42";
	text[5] = "b";
	text[6] = "test1";
	text[7] = "\' - \'";
	text[8] = "test2";
	text[9] = "10";

	printf("%s\n", ft_strjoin(10, text, " - "));
}
