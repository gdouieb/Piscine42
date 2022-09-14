/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:51:13 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/20 18:53:16 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	display_tab(int **tab, int size)
{
	int	i;
	int	j;

	i = -1;
	while (i++ < size - 1)
	{
		j = -1;
		while (++j < size)
		{
			if ((j + 1) % size == 0)
				printf("%d\n", tab[i][j]);
			else
				printf("%d ", tab[i][j]);
		}
	}
}

int	**init_tab(int size)
{
	int	**tab;
	int	j;
	int	i;

	tab = malloc(sizeof(int) *(size +1));
	i = -1;
	while (i++ < size)
	{
		j = -1;
		while (j++ < size)
		{
			tab[i] = malloc(sizeof(int) *(size +1));
		}
	}
		i = -1;
		j = -1;
	while (i++ < size -1)
	{
		while (j++ < size -2)
		{
			tab[i][j] = 0;
		}
	}
	free(tab[i]);
	return (tab);
}

int	main(int ac, char **av)
{
	char	tab1[12][4] = {{1, 2, 3, 4}, 
	{2, 3, 4, 1},
	{3, 4, 1, 2},
	{4, 1, 2, 3}};
	int		i;
	int		j;

	if (ac == 2)
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				if ((j + 1) % 4 == 0)
					printf("%d\n", tab1[i][j]);
				else
					printf("%d ", tab1[i][j]);
				j++;
			}
			i++;
		}
	}
	return (0);
}
