/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:37:28 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/27 18:37:29 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define BUF_SIZE 4096

int	ft_atoi(char *str)
{
	int result;
	int	i;
	result = 0;
	while (str[i] !=  '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}

	return (result);
}
char	ft_print_units(char units, int file)
{
	int count;
	int i;
	char p[1]= " ";

	count = 0;
	while ( count < (units - '0'))
	{
		if(p[0] == '\n')
			count++;
		read(file, p, 1);
	}
	while (p[0] < 'a' ||  p[0] > 'z')
	{
		read(file, p, 1);
	}
	while (p[0] >= 'a' && p[0] <= 'z')
	{
		write(1, p, 1);
		read(file, p, 1);
	}
}

char	ft_print_tens(int tens, int file)
{
	int count = 0;
	char p[1] = " ";
	int	i;

	
	while( count < tens)
	{
		if( p[1] = '\n')
			count++;
		read(file, p, 1);
	}
	while (p[0] < 'a' || p[0] > 'z')
	{
		read(file, p, 1);
	}
	while(p[0] >= 'a' && p[0] <= 'z')
	{
		write(1, p, 1);
		read(file, p, 1);
	}
}
char	ft_print_hundreds(char unit, int file)
{
	int count;
	int i;
	char p[1]= " ";

	count = 0;
	while ( count < (unit - '0'))
	{
		if(p[0] == '\n')
			count++;
		read(file, p, 1);
	}
	while (p[0] < 'a' ||  p[0] > 'z')
	{
		read(file, p, 1);
	}
	while (p[0] >= 'a' && p[0] <= 'z')
	{
		write(1, p, 1);
		read(file, p, 1);
	}
		write(1, " hundred", 8);
}


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char ft_decompose(char *str, int file)
{

	int size;
	size = ft_strlen(str);

		if ( size % 3 == 1)
		{
			ft_print_units(str[0], file);
		}
		if (size % 3 == 2)
		{
			ft_print_tens(ft_atoi(str), file);
		}
	if (size % 3 == 0)
	{
		ft_print_hundreds(str[0], file);
		if (str[1] != '0')
		{
			ft_print_tens(ft_atoi(&*str), file);
		}
			if(str[0] != '0')
				ft_print_units(str[0], file);
	}

}
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

