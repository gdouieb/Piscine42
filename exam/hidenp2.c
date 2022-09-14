#include <unistd.h>
void	hiden(char *s1, char *s2)
{
	int i;
	int j;
	i = 0;
	j = 0;

	while (s2[i] != '\0')
	{
		if (s2[i] == s1[j])
		{	
			j++;
		}	
		i++;
		if (s1[j] == '\0')
		{
			write(1, "1", 1);
			return ;
		}
		else 
		{
			write(1, "0", 1);
			return ;
		}
	}
}
int main (int ac, char **av)
{
	if (ac == 3)
		hiden(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}
