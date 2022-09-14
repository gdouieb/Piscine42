void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	ft_atoi(char *str)
{
	int result;

	result = 0;

	while(*str)
	{
		//if (*str >= 48 && *str <= '9')
		//{
			result = result * 10 + *str - '0';
			str++;
		//}
	}
	return (result);
}
void ft_putnbr(int nb)
{
	int hex_1;
	int hex_2;

	hex_1 = nb /16;
	hex_2 = nb % 16;

	if (nb >= 16)
	{
		ft_putnbr(nb / 16);
		ft_putnbr(nb % 16);
	}
	if (nb < 10)
		ft_putchar(nb + 48);
	else if( nb<16)
		ft_putchar(nb + 87);
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putnbr(ft_atoi(av[1]));
	}
	write(1, "\n", 1);
	return 0;
}
