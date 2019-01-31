/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 15:55:26 by xwang             #+#    #+#             */
/*   Updated: 2018/08/02 19:35:04 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_ultimate_range(char **main, int argc, char **argv)
{
	int		length;
	int		i;
	char	*ptr;

	i = 1;
	while (i < argc)
	{
		length = length + ft_strlen(argv[i]) + 1;
		i++;
	}
	ptr = (char*)malloc(sizeof(*ptr) * length);
	if (ptr == NULL)
	{
		*main = 0;
		return (0);
	}
	*main = ptr;
	return (length);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*main;
	int		length;
	int		argc_pos;
	int		argv_pos;
	int		main_pos;

	length = ft_ultimate_range(&main, argc, argv);
	argc_pos = 1;
	main_pos = 0;
	while (argc_pos < argc)
	{
		argv_pos = 0;
		while (argv[argc_pos][argv_pos] != '\0')
		{
			main[main_pos] = argv[argc_pos][argv_pos];
			argv_pos++;
			main_pos++;
		}
		if (argc_pos != argc - 1)
			main[main_pos] = '\n';
		argc_pos++;
		main_pos++;
	}
	main[main_pos] = '\0';
	return (main);
}
