/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-goff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:54:48 by cle-goff          #+#    #+#             */
/*   Updated: 2022/03/27 19:16:49 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "prototypes.h"

void    str_send_cuted(char *str, int str_len, int fd)
{
        int     i;

        i = 0;
        if (str_len % 3 == 0)
        {
                ft_decompose(str[0 + i], str[1 + i], str[2 + i], ft_power(str_len - i), fd);
                i += 3;
        }
        else if(str_len % 3 == 2)
        {
                ft_decompose('0', str[0] , str[1], ft_power(str_len - i), fd);
                i += 2;
        }
        else if(str_len % 3 == 1)
        {
                ft_decompose('0', '0',str[0], ft_power(str_len - i), fd);
                i++;
        }
        while (i < str_len)
        {
                ft_decompose(str[0 + i], str[1 + i], str[2 + i], ft_power(str_len - i), fd);
                i += 3;
        }
}

char	ft_power(int power)
{
	char	str[1000000000];
	int	i;
	
	i = 0;
	while (i < power)
	{
		if (i == 0)
		{
			str[i] = '1';
		}
		else if ( i > 0)
		{
			str[i] = '0';
		}
		i++;
	}
	return (str);
}






