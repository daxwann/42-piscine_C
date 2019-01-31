/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 15:30:21 by xwang             #+#    #+#             */
/*   Updated: 2018/07/31 17:46:53 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	i = 0;
	while (to_find[i])
	{
		if (str[i] == '\0')
			return (0);
		if (str[i] != to_find[i])
		{
			str++;
			return (ft_strstr(str, to_find));
		}
		i++;
	}
	return (str);
}
