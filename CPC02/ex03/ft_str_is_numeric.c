//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
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
	char str1[] = "Student";
	char str2[] = "12345";
	char str3[] = "";

	i = ft_str_is_numeric(str1);
	c = i + 0;
	printf("%d\n", c);

	i = ft_str_is_numeric(str2);
	c = i + 0;
	printf("%d\n", c);

	i = ft_str_is_numeric(str3);
	c = i + 0;
	printf("%d\n", c);
}
*/
