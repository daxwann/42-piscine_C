/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 12:09:58 by xwang             #+#    #+#             */
/*   Updated: 2018/07/31 19:48:27 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*dest_start;

	dest_start = dest;
	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest_start);
}
