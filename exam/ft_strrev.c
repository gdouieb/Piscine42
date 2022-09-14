

int	ft_strlen(char *str)
	{
	int	i;

	i = 0;
	while (str[i]!= '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int len;
	int i;
	int	tmp;

	i = 0;
	len = ft_strlen(str) -1;
	while (len > i)
	{
		tmp = str[len];
		str[len] = str[i];
		str[i] = tmp;
		len--;
		i++;
	}

	return (str);
}
int main()
{
	char tab[] = "qwertyuioop";
	ft_strrev(tab);
	printf("%s", tab);
	return 0;
}

