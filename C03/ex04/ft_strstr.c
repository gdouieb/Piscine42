/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:34:25 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/17 14:34:42 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	find;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		find = 0;
		while (str[find + i] == to_find[find])
		{
			if (to_find[find + 1] == '\0')
				return (str + i);
			find++;
		}
		i++;
	}
	return (NULL);
}
