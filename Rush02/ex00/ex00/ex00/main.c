/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:53:49 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/27 17:54:39 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sys/types.h>
#include <fcntl.h>



#define BUF_SIZE 4096
#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int ret;
	char buf[BUF_SIZE + 1];
	int fd;

	
	if ( ac == 2)
	{
		fd = open("numbers.dict.txt", O_RDONLY);
			ft_decompose(av[1], fd);
			close(fd);
		if (fd == -1)
		{
			write(2, "openerror", 9);
			return 1;
		}
	}

return 0;
}

