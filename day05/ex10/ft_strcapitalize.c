/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 20:34:36 by xwang             #+#    #+#             */
/*   Updated: 2018/07/31 22:57:57 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int cap;

	i = 0;
	cap = 1;
	while (str[i] != '\0')
	{
		if ((str[i] > 'z' || str[i] < 'A') && (str[i] > '9' ||
			str[i] < '0'))
			cap = 1;
		else if ((str[i] >= 'a' && str[i] <= 'z') && cap == 1)
		{
			str[i] -= 'a' - 'A';
			cap = 0;
		}
		else if (((str[i] >= 'A' && str[i] <= 'Z') ||
			(str[i] >= '0' && str[i] <= '9')) && cap == 1)
			cap = 0;
		else if (str[i] >= 'A' && str[i] <= 'Z' && cap == 0)
			str[i] += 'a' - 'A';
		i++;
	}
	return (str);
}
