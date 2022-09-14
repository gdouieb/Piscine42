/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 20:04:53 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/29 02:46:22 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcount(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + ft_strlen(sep) * (size -1);
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		i;

	i = 0;
	p = ft_strcount(size, strs, sep);
	while (i < size)
	{
		ft_strcat(p, strs[i]);
		if (i < size -1)
			ft_strcat(p, sep);
		i++;
	}
	return (p);
}
int main()
{
        char *str[3];

        str[0] = "My";
        str[1] = "dear";
        str[2] = "reader";

        printf("%s", ft_strjoin(3, str, "HHAAAA"));
        return(0);
}

