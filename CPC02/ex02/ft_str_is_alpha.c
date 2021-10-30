//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			str++;
			continue ;
		}
		if (*str >= 'a' && *str <= 'z')
		{
			str++;
			continue ;
		}
		return (0);
	}
	return (1);
}

/*
#include <unistd.h>

int main(void)
{
	int i;
	char c;
	char str1[] = "Student";
	char str2[] = "12345";
	char str3[] = "";

	i = ft_str_is_alpha(str1);
	c = i + 0;
	printf("%d\n", c);

	i = ft_str_is_alpha(str2);
	c = i + 0;
	printf("%d\n", c);

	i = ft_str_is_alpha(str3);
	c = i + 0;
	printf("%d\n", c);
}
*/
