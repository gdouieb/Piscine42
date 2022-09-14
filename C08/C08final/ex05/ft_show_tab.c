/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:37:10 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/30 14:38:36 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	ft_putchar(n + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		i++;
	}
}

/*int main (void)
{
    int i;
    int j;

    i = 0;
    j = 0;

    char *str1 = "leooooooopu";
    char *str2 = "petit ";
    char *str3 = "anarchiste ";
    char *str4 = "tout rouge ";
    char *str5 = "et noir";
    struct s_stock_str *tab;

    char *str[5] = {str1, str2, str3, str4, str5};
    tab = ft_strs_to_tab(5, str);
    ft_show_tab(tab);

    while (tab[i].str != 0)
    {
        printf ("%s-%d-%s-\n", tab[i].str, tab[i].size, tab[i].copy);
        i++;
    }

}
*/
