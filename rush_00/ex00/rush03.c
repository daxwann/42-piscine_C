/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 21:28:59 by llu               #+#    #+#             */
/*   Updated: 2018/07/29 10:46:08 by llu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_line(int x, char *arr)
{
	int xloc;

	xloc = 1;
	ft_putchar(arr[0]);
	if (x != 1)
	{
		while (xloc != (x - 1))
		{
			ft_putchar(arr[1]);
			xloc++;
		}
	}
	if (x > 1)
	{
		ft_putchar(arr[2]);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int yloc;

	yloc = 1;
	if (y <= 0 || x <= 0)
		return ;
	while (yloc <= y)
	{
		if (yloc == 1)
			draw_line(x, "ABC");
		else if (y > 2 && yloc < y)
			draw_line(x, "B B");
		else if (yloc == y)
			draw_line(x, "ABC");
		yloc++;
	}
}
