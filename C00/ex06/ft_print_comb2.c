/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 03:01:51 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/12 22:34:25 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_separation(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_display(int a)
{
	int	nb1;
	int	nb2;

	nb1 = a / 10;
	nb2 = a % 10;
	ft_putchar(nb1 + 48);
	ft_putchar(nb2 + '0');
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 98)
	{
		j = i +1;
		while (j <= 99)
		{
			ft_display(i);
			ft_putchar(' ');
			ft_display(j);
			if (!(i == 98 && j == 99))
			{
				ft_separation();
			}
			j++;
		}
		i++;
	}
}
