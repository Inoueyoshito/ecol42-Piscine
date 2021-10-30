//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 127)
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
	char str1[] = "STUDENT";
	char str2[] = "12345";
	char str3[] = "";

	i = ft_str_is_printable(str1);
	c = i + 0;
	printf("%d\n", c);

	i = ft_str_is_printable(str2);
	c = i + 0;
	printf("%d\n", c);

	i = ft_str_is_printable(str3);
	c = i + 0;
	printf("%d\n", c);
	return (0);
}
*/
