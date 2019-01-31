/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 23:13:53 by xwang             #+#    #+#             */
/*   Updated: 2018/08/02 23:32:39 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*allocate(char *str, int start, int end)
{
	char	*word;
	int		length;
	int		pos;

	length = (end - start) + 2;
	word = (char*)malloc(sizeof(*word) * length);
	pos = 0;
	while (start <= end)
	{
		word[pos] = str[start];
		pos++;
		start++;
	}
	return (word);
}

int		word_count(char *str)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				&& str[i] != '\0')
			i++;
		if (str[i] != '\0')
		{
			if (i == 0)
				count++;
			else if (str[i - 1] == ' ' || str[i - 1] == '\t' ||
					str[i - 1] == '\n')
				count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	char	**arr;
	int		k;
	int		words[3];

	words[0] = word_count(str) + 1;
	arr = malloc(sizeof(char*) * words[0] + 1);
	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				&& str[i] != '\0')
			i++;
		words[1] = i;
		while ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
				&& str[i] != '\0')
			i++;
		words[2] = i - 1;
		arr[k] = allocate(str, words[1], words[2]);
		k++;
	}
	arr[words[0] - 1] = 0;
	return (arr);
}
