/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:07:02 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/16 13:15:15 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 48 && c <= 57))
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_alpha(str[i -1]) == 1)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
			else
			{
				if (str[i] >= 97 && str[i] <= 122)
					str[i] = str[i] + 32;
			}
		}
		if (ft_str_is_alpha(str[i -1]) == 0)
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
