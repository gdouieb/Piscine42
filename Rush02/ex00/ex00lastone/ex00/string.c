/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-goff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:54:48 by cle-goff          #+#    #+#             */
/*   Updated: 2022/03/27 16:41:09 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "prototypes.h"

char	ft_power(int power)
{
	char	*str;
	int	i;
	
	i = 0;
	while (i < power)
	{
		if (i == 0)
		{
			*str = '1';
		}
		else if ( i > 0)
		{
			*str = '0';
		}
		i++;
		str++;
	}
	return (*str);
}

void    str_send_cuted(int file, int str_len, char *str)
{
        int     i;

        i = 0;
        /*if (str_len % 3 == 0)
        {
                ft_print_hundreds(file, str[i], str[1 + i], str[2 + i], ft_power(str_len-i));
                i += 3;
        }*/
        /*else*/ if(str_len % 3 == 1)
        {
                ft_print_units(file, str[0]);
                i += 2;
        }
        /*else if(str_len % 3 == 1)
        {
                ft_print_tens(file, '0', str[0], str[1], ft_power(str_len));
                i++;
        }
        /*while (i < str_len)
        {
                ft_decompose(str[i], str[i+1], str[i+2], ft_power(str_len-i));
                i += 3;
        }*/
}








