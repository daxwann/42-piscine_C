/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 12:58:04 by xwang             #+#    #+#             */
/*   Updated: 2018/08/09 21:21:04 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int status;

	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (argc == 2)
	{
		status = read_file(argv[1]);
		if (status == 1)
			return (1);
	}
	else
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	return (0);
}
