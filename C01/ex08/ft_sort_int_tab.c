/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:24:21 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/13 16:50:44 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	j;

	i = 0;
	j = 0;
	if (size <= 1)
		return ;
	while (i < size)
	{
		j = 0;
		while (j < size -1)
		{
			if (tab[j] > tab [j +1])
			{
				tmp = tab[j];
				tab[j] = tab[j +1];
				tab[j +1] = tmp;
			}
			j++;
		}
		i++;
	}
}
