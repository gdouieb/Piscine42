/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-goff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:37:55 by cle-goff          #+#    #+#             */
/*   Updated: 2022/03/27 14:12:13 by cle-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "prototypes.h"

#include <unistd.h>

void	ft_print_error(void)
{
	write (1, "ERROR", 5);
	 write (1, "\n", 1);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_pustring(char *str)
{
	while (str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_print_error_dic()
{
	write (1, "Dict Error", 10);
	write (1, "\n", 1);

}
