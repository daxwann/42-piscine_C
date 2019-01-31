/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 18:56:09 by xwang             #+#    #+#             */
/*   Updated: 2018/08/01 20:33:18 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

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

int		main(int argc, char **argv)
{
	int i;
	int k;

	i = 1;
	while (i < argc)
	{
		k = i;
		while (k > 1 && ft_strcmp(argv[k - 1], argv[k]) > 0)
		{
			ft_swap(&argv[k - 1], &argv[k]);
			k--;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
