int	ft_power(int power)
{
	int i;

	i = 10;
	while (power > 0)
	{
	i = i * 10;
	power--;
	}
	return (i);
}
