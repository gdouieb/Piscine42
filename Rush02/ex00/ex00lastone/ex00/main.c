/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:53:49 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/27 19:20:32 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "prototypes.h"
#define BUF_SIZE 4096

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
			ft_print_error;
			return 1;
		}
	}

return 0;
}

