/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-goff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:37:55 by cle-goff          #+#    #+#             */
/*   Updated: 2022/03/27 19:14:47 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "prototypes.h"

#include <unistd.h>

void	ft_print_error(void)
{
	write (2, "Dict Error\n", 11);
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
	write (2, "Dict Error\n", 11);
}
