/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-goff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:04:24 by cle-goff          #+#    #+#             */
/*   Updated: 2022/03/27 18:30:53 by cle-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "prototypes.h"

#include <sys/types.h>
#include <fcntl.h>



#define BUF_SIZE 4096
#include <unistd.h>
#include <stdio.h>

char    ft_print_units(char c, int file)
{
        int count;
        char p[1]= " ";

        count = 0;
        while ( count < (c - '0'))
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

char    ft_print_tens(char c, int file)
{
        int count;
        char p[1] = " ";

        while( count < (c - '0' ))
        {
                if( p[0] = '\n')
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
char    ft_print_hundreds(char c, char d, int file)
{
	(void) c;
	(void) d;
	(void) file;
}

void	fr_print_power(char power, int file)
{




}

}
void	ft_decompose(char hundred, char tens, char units, char power, int fd)
{
	if (hundred != '0')
		ft_print_hundreds(hundred, '0', 0, fd);
	if (tens != '0')
		ft_print_tens(tens, 0, fd);
	if (power != '0')
		ft_print_power(power, fd);
	ft_print_units(units, 0, fd);	
}



        int size;
"translate.c" 112L, 1416C        
