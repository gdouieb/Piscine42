/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-goff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:36:30 by cle-goff          #+#    #+#             */
/*   Updated: 2022/03/26 20:12:56 by cle-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "prototypes.h"

int	ft_check_input(char *str)
{
	int	i;

	i = 0;
	while (str[1] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			ft_print_error();
			return (0);
		}
		i++;
	}
	return (i);
}


