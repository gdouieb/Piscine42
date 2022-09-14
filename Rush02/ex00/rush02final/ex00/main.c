/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-goff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:25:37 by cle-goff          #+#    #+#             */
/*   Updated: 2022/03/27 18:41:25 by cle-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "prototypes.h"
#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int str_len;
	int fd;
	
	if (argc == 2)
	{
		if (ft_check_input(argv[1]) == 0)
			ft_print_error();
		else
		{
			str_len = ft_check_input(argv[1]);
			str_send_cuted(argv[1], str_len, fd);
		}
		fd = open("numbers.dict.txt", O_RDONLY);
		str_send_cuted(argv[1], str_len, fd);
                        close(fd);
                if (fd == -1)
                {
                        ft_print_error();
	 		return 1;
		}
	}
	return (0);
}

