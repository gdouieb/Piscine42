#include <stdio.h>
#include <stdlib.h>
int	isvalid(char c, int base)
{
	char digits[17] = "0123456789abcdef";
	char digits2[17] = "0123456789ABCDEF";

	while (base--)
		if(digits[base] == c || digits2[base] == c)
			return (1);
		return 0;

}


int	ft_atoi_base(const char *str, int str_base)
{
	int len;
	int	result;
	int	i;
	int sign;

	sign = 1;
	result = 0;
	if (str[0] == '-')
		sign = -1;
	while (str[i] != '\0' && isvalid(*str, str_base))
	{
		if (str[i] >= 48 && str[i] <= '9')
			result = result + str[i] - 48;
		else if(str[i] >= 'A' && str[i] <= 'Z')
			result = result + str[i] - 55;
		else if(str[i] >= 'a' && str[i] <= 'z')
			result = result + str[i] - 87;
		i++;
	}
	return (sign *result);
}

int main(int ac, char **av)
{
	if (ac ==3)
	{
		printf("%d", ft_atoi_base(av[1], atoi(av[2])));
	return 0;
	}
}
