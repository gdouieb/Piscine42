#include <stdlib.h>
int ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int *ft_range(int start, int end)
{
	int *p;
	int i;

	i = 0;
	p =malloc(sizeof(int)*(ft_abs((end - start))));
	if(!p)
		return NULL;
	if(end > start)
	{
		while (end != start)
		{
			p[i] = start;
			start++;
			i++;
		}
	}
	p[i] = end;
	if ( end < start)
	{
		while (end != start)
		{
		p[i] = start;
	 	i++;
		start--;
		}
	}
	p[i] = end;
	p[i] = end;
p[i] = end;

	return (p);
}

int main()
{
	int i;
	i = 0;
	int *tab = ft_range(5, -44);
	while (i < 50)
	{
		printf("%d", tab[i]);
		i++;
	}
	return 0;
}

