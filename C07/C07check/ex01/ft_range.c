/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:55:08 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/28 19:56:01 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int	range;
	int	*print;
	int	i;

	i = 0;
	range = max - min;
	if (min >= max)
	{
		print = 0;
		return (0);
	}
	print = (int *)malloc(sizeof(int) * range);
	if (!print)
		return (NULL);
	while (min < max)
	{
		print[i] = min;
		min++;
		i++;
	}
	return (print);
}
