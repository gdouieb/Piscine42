#include <stdlib.h>

int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}
int	*ft_rrange(int start, int end)
{
	int *array;
	int i;

	i = 0;

		array = (int*)malloc(sizeof(unsigned long) * ft_abs((end - start)));
		while ( end > start)
		{
			array[i] = end;
			i++;
			end--;
		}
		array[i] = end;
		while (end < start)
		{
			array[i] = end;
			end++;
			i++;
		}
		array[i] = end;
	return (array);
}



	int main(int argc, char **argv)
	{
		int i;
		int *tab;

		i = 0;
		tab = ft_rrange(50, -48);
		while (i < 99)
		{
			printf("%d", tab[i]);
			i++;
		}
	}
