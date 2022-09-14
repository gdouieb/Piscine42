/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 01:30:52 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/28 23:55:45 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	countingchar(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !ft_is_sep(str[i], charset))
		i++;
	return (i);
}

int	counting_word(char *str, char *charset)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_is_sep(str[i], charset))
			i++;
		if (str[i] != '\0' && !ft_is_sep(str[i], charset))
			word++;
		while (str[i] && !ft_is_sep(str[i], charset))
			i++;
	}
	return (word);
}

char	*ft_scpy(char *str, int size)
{
	char	*dest;

	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	dest[size] = '\0';
	while (size--)
		dest[size] = str[size];
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		size_array;
	int		tabs;
	char	**array;

	tabs = counting_word(str, charset);
	array = malloc(sizeof(char *) * (tabs + 1));
	if (!array)
	{
		return (NULL);
	}
	i = -1;
	while (++i < tabs)
	{
		while (*str && ft_is_sep(*str, charset))
			str++;
		size_array = countingchar(str, charset);
		array[i] = ft_scpy(str, size_array);
		if (!array[i])
			return (NULL);
		str = str + size_array;
	}
	array[i] = 0;
	return (array);
}
