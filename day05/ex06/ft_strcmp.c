/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 15:53:04 by xwang             #+#    #+#             */
/*   Updated: 2018/07/31 15:53:18 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
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
