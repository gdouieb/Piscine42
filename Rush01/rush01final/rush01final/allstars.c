/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allstars.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 11:00:24 by anmande           #+#    #+#             */
/*   Updated: 2022/03/20 17:48:40 by joniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include "library.h"

int	ft_taille_carre(char *argv[])
{
	int	i;
	int	a;
	int	count;

	i = 0;
	a = 0;
	while (*argv[1] != '\0')
	{
		if ((ft_is_numb(argv[1][i]) == 1)
			&& (ft_is_numb(argv[1][i + 1]) == ' ')
			&& (ft_is_numb(argv[1][i - 1]) == ' '))
			a++;
		if ((ft_is_numb(argv[1][i] != 0)) && (argv[1][i] != ' '))
			return (0);
		i++;
	}
	if (a % 4 != 0)
		return (0);
	return (a);
}

int	ft_verif(int **tab)
{
	if (y > 0)
	{
		if (tab == tabup)
			return (0);
	}
	if (x > 0)
	{
		if (tab == tabarriere)
			return (0);
	}
	if (tab == tabdown || tab == tabsuite)
		return (0);
	if else ((tab != tabdown) && (tab != tabsuite))
		return (1);
	return (1);
}

int	ft_bouclesolve(int tab[][], int x, int y, int noeud)
{
	if (ft_verif(tab) == 0)
	{	
		tab[y][x] = tab[y][x] + 1;
		ft_solveur_final(tab[x][y], noeud);
	}
	else if (ft_verif(tab) == 1)
	{
		noeud = 1;
		tab[y][x + 1] = tab[y][x] + 1;
		x++;
	}
	if ((ft_check_line_left(*tab[x], int indice)) == 0
		&& (ft_check_line_left(*tab[x], int indice) == 0));
{
		x = x - 1;
		tab[y][x] = tab[y][x] + 1;
		ft_solveur_final(tab[x][y]);
	}
}

int	ft_solveur_final(int tab[][], int noeud, int sizecarre)
{
	int	x;
	int	y;

	if (noeud == 0)
	{
		x = 0;
		j = 0;
		tab[x][y] = 1;
	}
	while ((x * y) < sizecarre)
	{
		while (x < (sizecarre / 4))
		{
			ft_bouclesolve(tab, x, y, noeud);
		}	
		x = 0;
		y++;
		tab[x][y] = 1;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	*tab[];
	int	noeud;
	int	sizecube;

	if (argv == 2)
	{		
		sizecube = ft_taille_carre(argv);
		ft_solveur_final(tab, noeud, sizecube);
	}
	return (0);
}
