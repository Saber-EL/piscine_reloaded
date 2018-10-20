/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchatoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 08:28:15 by zchatoua          #+#    #+#             */
/*   Updated: 2018/10/04 08:52:42 by zchatoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int		fd;
	char	buff[4096];
	int		ret;

	if (ac < 2)
		write(1, "File name missing.\n", 19);
	else if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			return (0);
		while ((ret = read(fd, buff, 4095)))
		{
			buff[ret] = '\0';
			write(1, buff, ret);
		}
		close(fd);
	}
	return (0);
}
