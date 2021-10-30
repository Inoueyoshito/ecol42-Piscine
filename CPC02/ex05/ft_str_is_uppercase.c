//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			str++;
			continue ;
		}
		return (0);
	}
	return (1);
}

/*
int main(void)
{
	int i;
	char c;
	char str1[] = "STUDENT";
	char str2[] = "12345";
	char str3[] = "";

	i = ft_str_is_uppercase(str1);
	c = i + 0;
	printf("%d\n", c);

	i = ft_str_is_uppercase(str2);
	c = i + 0;
	printf("%d\n", c);

	i = ft_str_is_uppercase(str3);
	c = i + 0;
	printf("%d\n", c);
}
*/
