/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 10:26:12 by xwang             #+#    #+#             */
/*   Updated: 2018/08/02 11:57:29 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		str_len;
	int		i;

	str_len = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * (str_len + 1));
	i = 0;
	if (str == NULL)
		return (0);
	while (i < str_len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
