#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c, int size)
{
	int	i;
	while(i <= size)
	{
		write(1, &c, 1);
		i++;
	}
}
int	ft_print_hexa(unsigned long long addr_nb, int is_print) 
{
	int	i;
	int	hexa1;
	int	hexa2;
	int	resultatPrint;
	i = 0;
	while (addr_nb != 0)
	{
		addr_nb = addr_nb / 16;
		/*if ( is_print == 1)
		{
			resultatPrint = nb % 16;
			ft_putchar(resultatPrint, );
		}*/
		i++;
	}
	return i;
}
/*char	ft_put_str_non_printable(char *str)
{
        int i;
        i = 0;
		while(str[i] != '\0')
        {
            if(str[i] < 32 || str[i] == 127)
					ft_print_hexa(str[i]);
			else
				ft_putchar(str[i]);
			i++;
		}
}*/
void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;
	int	total_hexa;
	i = 0;
		total_hexa = ft_print_hexa(1844674407370955160, 0);
		printf("%d",total_hexa);
	ft_putchar('0', 16 - total_hexa);
}

int main()
{
	char	tab[] = "Bonjour les aminches";
	ft_print_memory(tab, 16);
	return 0;
}
