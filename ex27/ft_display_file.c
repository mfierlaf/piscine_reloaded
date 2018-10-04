/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 17:07:34 by mfierlaf          #+#    #+#             */
/*   Updated: 2018/10/04 11:36:41 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_display_file(int argc, char **argv)
{
	int fd;
	int ret;
	char buf[1];

	fd = 0;
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		while (ret == read(fd, buf, 1))
		{;
			buf[ret] = '\0';
			write(1, buf, 1);
		}
		buf[ret] = '\0';
		if (close(fd) == -1)
		{
			write (2, "close() error", 13);
		}
	}
}

int		main(int argc, char **argv)
{
	ft_display_file(argc, argv);
	return (0);
}
