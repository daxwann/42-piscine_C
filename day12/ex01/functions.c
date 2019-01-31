/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 17:44:37 by xwang             #+#    #+#             */
/*   Updated: 2018/08/09 22:23:27 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUF_SIZE 30000
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int		error1(void)
{
	char	buffer[BUF_SIZE + 1];
	int		ret;

	while ((ret = read(0, buffer, BUF_SIZE)))
	{
		buffer[ret] = '\0';
		ft_putstr(buffer);
	}
	return (1);
}

int		error2(char *str)
{
	ft_putstr("cat: ");
	ft_putstr(str);
	ft_putstr(": Is a directory\n");
	errno = 0;
	return (1);
}

int		read_file(char *str)
{
	int		fd;
	int		ret;
	char	buffer[BUF_SIZE + 1];

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("cat: ");
		ft_putstr(str);
		ft_putstr(": No such file or directory\n");
		return (1);
	}
	while ((ret = read(fd, buffer, BUF_SIZE)))
	{
		if (errno == EISDIR)
			return (error2(str));
		buffer[ret] = '\0';
		ft_putstr(buffer);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}
