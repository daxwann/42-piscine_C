/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 12:58:04 by xwang             #+#    #+#             */
/*   Updated: 2018/08/09 22:23:57 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int status;
	int i;

	if (argc < 2 || argv[1][0] == '-')
		return (error1());
	else
	{
		i = 1;
		while (i < argc)
		{
			status = read_file(argv[i]);
			if (status == 1)
				return (1);
			i++;
		}
	}
	return (0);
}
