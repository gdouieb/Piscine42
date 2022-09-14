/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:12:46 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/22 19:55:24 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_array(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	ft_retain(int *tab, int n)
{
	int	i;

	i = n - 1;
	while (tab[i] >= 9 - (n - (i +1)) && i > 0)
	{
		printf("%d", i);
		i--;
	tab[i]++;
	i++;
	while (i < n && i >= 0)
	{
		tab[i] = tab [i - 1] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[9];
	int	i;

	i = 0;
	while (i < 9)
	{
		tab[i] = i;
		i++;
	}
	i = n - 1;
	if (n < 1 || n > 9)
		return ;
	while (tab[i] < 10)
	{
		ft_array(tab, n);
		if (tab[0] != 9 - (n - 1))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		tab[i]++;
		if (tab[i] > 9)
			ft_retain(tab, n);
	}
}

int main ()
{
	ft_print_combn(3);
	return 0;
}
