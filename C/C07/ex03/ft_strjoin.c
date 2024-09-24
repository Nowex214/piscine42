/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:12:32 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 10:24:45 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	sep_len;

	len = 0;
	sep_len = 0;
	while (sep[sep_len])
		sep_len++;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i != size - 1)
			len += sep_len;
		i++;
	}
	return (len);
}

void	ft_strcat(char *dest, char *src, int *k)
{
	int	j;

	j = 0;
	while (src[j])
		dest[(*k)++] = src[j++];
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		len;
	int		k;

	if (size == 0)
		return ((char *)malloc(1));
	len = ft_total_len(size, strs, sep);
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		ft_strcat(s, strs[i], &k);
		if (i != size - 1)
			ft_strcat(s, sep, &k);
		i++;
	}
	s[k] = '\0';
	return (s);
}
/*
int	main(void)
{
	char	*text[10];

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
*/
