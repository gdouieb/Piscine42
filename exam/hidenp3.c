#include <unistd.h>
void	hidenp(char *s1, char *s2)
{
	int i;
	int i2;
	int count;

	i = 0;
	i2 = 0;
	count = 0;
	while(av[1][i] != '\0')
	{
		while(av[1][i2] != '\0')
		{
			if (av[1][i] == av[2][i2])
			{
			count++;
			break ;
			}
			i2++;
		}
		i++;
		}
		if (av[1][count+1] == '\0')
		{
			write (1, "1", 1);
		}
		else 
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		hidenp(av[1], av[2]);
	}
	write(1, "\n", 1);
	return 0;
}
