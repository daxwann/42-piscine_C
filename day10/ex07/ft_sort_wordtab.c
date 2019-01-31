/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 13:10:40 by xwang             #+#    #+#             */
/*   Updated: 2018/08/07 16:28:55 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int position;

	position = 0;
	while (s1[position] == s2[position] && s1[position] != '\0')
	{
		position++;
	}
	if (s1[position] > s2[position])
	{
		return (s1[position] - s2[position]);
	}
	if (s1[position] < s2[position])
	{
		return (s1[position] - s2[position]);
	}
	else
	{
		return (0);
	}
}

void	ft_swap(char **a, char **b)
{
	char *bucket;

	bucket = *a;
	*a = *b;
	*b = bucket;
}

void	ft_sort_wordtab(char **tab)
{
	int i;
	int k;

	i = 1;
	while (tab[i] != 0)
	{
		k = i;
		while (k > 0 && ft_strcmp(tab[k - 1], tab[k]) > 0)
		{
			ft_swap(&tab[k - 1], &tab[k]);
			k--;
		}
		i++;
	}
}
