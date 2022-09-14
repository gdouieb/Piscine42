/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:42:20 by anmande           #+#    #+#             */
/*   Updated: 2022/03/19 13:58:16 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check_double(int *line)
{
	int	i;
	int	nb;
	int	j;

	j = 0;
	while (line[j])
	{
		nb = line[j];
		i = 0;
		while (line[i])
		{
			if (nb == line[i] && i != j)
			{
				return (0);
			}
			i++;
		}
		j++;
	}
	return (1);
}

int	ft_check_line_left(int *line, int indice)
{
	int	i;
	int	compteur;
	int	hight;

	i = 0;
	compteur = 1;
	hight = line[i];
	while (line[i])
	{
		if (line[i] < line[i + 1] && line[i + 1] >= hight)
		{
			compteur++;
		}
		if (line[i + 1] > line[i] && line[i + 1] > hight)
		{
			hight = line[i + 1];
		}
		i++;
	}
	if (compteur == indice)
	{
		return (1);
	}
	return (0);
}

int	ft_check_line_right(int *line, int indice)
{
	int	i;
	int	compteur;
	int	hight;

	i = 0;
	compteur = 1;
	while (line[i])
		i++;
	hight = line[i];
	while (line[i])
	{
		if (line[i - 1] < line[i - 2] && line[i - 2] >= hight)
			compteur++;
		if (line[i - 1] > line[i] && line[i - 1] > hight)
			hight = line[i - 1];
		i--;
	}
	if (compteur == indice)
	{
		return (1);
	}	
	return (0);
}

/*int	main()
{
    int	line[5] = {1, 5, 8, 5};
	int	indice = 2;
	int	indice_right = 1;
	ft_check_double(line);
	ft_check_line_left(line, indice);
	ft_check_line_right(line, indice_right);
}
*/
