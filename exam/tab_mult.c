void ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_putnumber(int nbr)
{
	if (nbr > 9)
		ft_putnumber(nbr/10);
	ft_putchar(nbr %10 + '0');
}


	int ft_atoi(char *str)
{
	int result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result *10 + *str - '0';
		*str++;
	}
	return (result);
}

void  tab_mult(int n)
{
	int i;
	i = 1;
	while ( i <10)
	{
		ft_putnumber(i);
		write(1, "x", 1);
		ft_putnumber(n);
		write(1, "=", 1);
		ft_putnumber(i++ * n);
		write(1, "\n", 1);
		}
}
int main (int ac, char **av)
{
	

	if (ac == 2)
	{
	tab_mult(ft_atoi(av[1]));
	}
	write(1, "\n", 1);
	return 0;
}
		
