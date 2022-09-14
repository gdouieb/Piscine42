/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 23:53:46 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/28 23:56:40 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] <= ' ')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	check_in_base(char *str, char *base, int i)
{
	int	j;

	j = 0;
	while (base[j] != '\0')
	{
		if (str[i] == base[j])
			return (j);
		j++;
	}
	return (-1);
}

int	base_atoi(char *str, char *base, int i, int sign)
{
	int	nb;
	int	base_len;

	nb = 0;
	base_len = check_base(base);
	if (base_len == 0)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (check_in_base(str, base, i) != -1)
			nb = nb * base_len + check_in_base(str, base, i);
		else
			break ;
		i++;
	}
	return (nb * sign);
}

int	ft_atoi(char *str, char *base)
{
	int	i;
	int	symb;
	int	dec;

	i = 0;
	symb = 1;
	dec = base_atoi(str, base, i, symb);
	return (dec);
}
