// #include <string.h>
// #include <unistd.h>
// #include <stdio.h>

// int main()
// {
// int result;
// char i[] = "a";
// char e[] = "ab";
// result = strcmp(i, e);
// printf(strcmp(i, e));

// printf("res", result);
// }

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main() {

    
  char str1[] = "a", str2[] = "aa", str3[] = "ab";
  int result;

  // comparing strings str1 and str2
  result = ft_strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);
  

  // comparing strings str1 and str3
  result = ft_strcmp(str1, str3);
  printf("strcmp(str1, str3) = %d\n", result);

  return 0;
}