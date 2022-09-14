/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvorslov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:33:50 by mvorslov          #+#    #+#             */
/*   Updated: 2022/03/16 11:50:05 by gdouieb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char left, char middle, char right)
{
	ft_putchar(left);
	while (x > 2)
	{
		ft_putchar(middle);
		x--;
	}
	if (x > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if ((y >= 1) && (x >= 1))
	{
		print_line(x, '/', '*', 92);
		y--;
		while (y > 1)
		{
			print_line(x, '*', ' ', '*');
			y--;
		}
		if (y > 0)
			print_line(x, 92, '*', '/');
	}
}
