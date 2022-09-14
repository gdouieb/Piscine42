/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 23:47:02 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/28 23:56:29 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_base(char *str, char *base, int i);
int	check_base(char *base);
int	base_atoi(char *str, char *base, int i, int pos);
int	ft_atoi(char *str, char *base);

char	*ft_strrev(char *str, int nb)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	if (nb < 0)
	{
		i = 0;
		j = 1;
	}
	while (str[i] != '\0')
		i++;
	i = i - 1;
	while (i > j)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		j++;
		i--;
	}
	return (str);
}

char	*ft_putnbr_base(int nbr, char *base, int j, char *array)
{
	int			i;
	long		nb;

	i = check_base(base);
	nb = nbr;
	if (i == 0)
		return (0);
	if (nb < 0)
	{
		nb = nb * -1;
		array[j] = '-';
		j = j + 1;
	}
	if (nb < i && nb >= 0)
	{
		array[j] = base[nb];
	}
	if (nb >= i)
	{
		ft_putnbr_base((nb / i), base, j + 1, array);
		ft_putnbr_base((nb % i), base, j, array);
	}
	return (array);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*array;
	char	*result;

	array = malloc(sizeof(char) * 40);
	nb = ft_atoi(nbr, base_from);
	result = ft_putnbr_base(nb, base_to, 0, array);
	result = ft_strrev(result, nb);
	return (result);
}

/*int main()
{
    char nbr[] = "-2147483648";
    char base_from[] = "0123456789";
    char base_to[] = "01";

    printf("Test : %s\n", ft_convert_base(nbr, base_from, base_to));
    return (0);
}*/
