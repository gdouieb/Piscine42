/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stepbystep.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 11:00:24 by anmande           #+#    #+#             */
/*   Updated: 2022/03/19 21:01:19 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
<<<<<<< HEAD
#include <notrelibrairie.h>
=======
#include "library.h"
int	main()

	int	i;
	int	*line;
>>>>>>> 2e5d59f09686ff57783a1e0a78ea86c1b30a04b3


int	ft_solve(int tab[x][y])
{
	if(y > 0)
	{
		if(tab[y][x] == tab[y - 1][x])
			return(0);
	}
	if(x > 0)
	{
		if(tab[y][x] == tab[y][x - 1])
			return(0);
	}
	if(tab[i][j] == tab[y + 1][x] || tab[y][x] == tab[y][x + 1])
		return(0);
	if else(tab[y][x] != tab[y +1][x] && tab[y][x] != tab[y][x + 1])
		return(1);
	return(1);
}

int	ft_taille_carre(char *argv[])
{
<<<<<<< HEAD
	int	i;
	int	a;
	int	count;
	
	i = 0;
	a = 0;
	while(*argv[1] != '\0')
	{
	//si c'est un chiffre et au'il est suivit et precede d'un espace, on incremente a
		if((ft_is_numb(argv[1][i]) == 1) && (ft_is_numb(argv[1][i + 1]) == ' ') && (ft_is_numb(argv[1][i - 1]) == ' '))
			a++;
	//si c'est ni un chiffre, ni un nombre, on s'arrete
		if((ft_is_numb(argv[1][i] != 0)) && (argv[1][i] != ' '))  
			return(0);
		i++;
	}
	//si les valeurs d'entree ne donne pas de carre
	if (a % 4 != 0)
		return(0);
	return(a);	
}

int	ft_solveur_final(int tab[][], int noeud)
{
	int	x;
	int	y;
//peut etre un pb avc la recurtion et le fait de remettre les valeurs a zero || Peut etre un autre compteur ?
	
	if(noeud == 0)
	{
		x = 0;
		j = 0;
		tab[x][y] = 1;
	}
	
	while((x * y) < ft_taille_carre(char *argv[1]))
	{
		while(x < (ft_taille_carre(char *argv[1]) / 4))
		{
			if(ft_solve(tab[x][y]) == 0);
			{		
				tab[y][x] = tab[y][x] + 1;
				ft_solveur_final(tab[x][y], noeud);
			}
			else if(ft_solve(tab[x][y]) == 1) 
			{
				noeud = 1;
				tab[y][x + 1] = tab[y][x] + 1;
				x++;
			}
=======
	int	tab[i][j];

	int	i = 0;
	int	j = 0;
	int	valeur_tab = 1;
	int	noeud = 0;
	tab[i][j] = valeur_tab;
	while(i < noeud % 4 == 0)
		if(!ft_solve(tab[i][j], tab[i + noeud][j +1]));
		{		
			tab[i][j] = valeur_tab + 1;
			noeud = noeud - 1;
			ft_solveur_final();
>>>>>>> 2e5d59f09686ff57783a1e0a78ea86c1b30a04b3
		}
	//*line ou **line ?
		if((ft_check_line_left(int *line, int indice)) == 0 || (ft_check_line_left(int *line, int indice) == 0));
		{
			x = x - 1;
			tab[y][x] = tab[y][x] + 1; 
			ft_solveur_final(tab[x][y]);
		}
		x = 0;
		y++;
		tab[x][y] = 1;
	}		
	
}

//Cf l'autre fichier
/*int	check_line(int line, int input)
{
	int i;
	int	cmp;
	int height;

	i = 0;
	cmp = 1;
	hight = line[i];
	while (line[i] )
	{
		if (line[i] < line[i + 1] && line[i] >= hight)
		{
			cmp++;
		}
		if (line[i] < line[i + 1])
			height = line[i + 1];
		i++;
	}
	
}
int	main()
{
<<<<<<< HEAD
	int	i;
	int	*line;

	i = 0;
	line = {1, 2, 3, 4};
	if (!ft_solve(line));
		line[j] += 1;
		if (i == 3)
			j++;
		//i = 0;
}*/


=======
	if(tab[i][j] == tab[i + 1][j] || tab[i][j] == tab[i][j + 1])
		return(0);
	if else(tab[i][j] != tab[i +1][j] && tab[i][j] != tab[i][j + 1])
		return(1);
}
>>>>>>> 2e5d59f09686ff57783a1e0a78ea86c1b30a04b3
