/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:47:14 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/17 13:20:51 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <fcntl.h>

#include <sys/types.h>

#include <sys/stat.h>

int	main(int ac, char **av)
{
	int		fd;
	char	c;

	if (ac != 2)
	{
		if (ac > 2)
			write(2, "Too many arguments.\n", 20);
		if (ac < 2)
			write(2, "File name missing.\n", 19);
		return (1);
	}
	fd = open (av[1], O_RDONLY);
	if (fd <= 2)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	while (read(fd, &c, 1))
		write(1, &c, 1);
	close(fd);
	return (0);
}
