/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:09:26 by gdouieb           #+#    #+#             */
/*   Updated: 2022/03/22 17:15:29 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_program_name(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
}

int	main(int argc, char *argv[])
{
	(void) argc;
	ft_print_program_name(argv[0]);
	ft_putchar('\n');
	return (0);
}
