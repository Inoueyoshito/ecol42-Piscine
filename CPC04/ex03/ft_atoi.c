int	ft_atoi(char *str)
{
	int	c;
	int	type;
	int	number;

	c = 0;
	type = 1;
	number = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			type *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		number = 10 * number + str[c] - '0';
		c++;
	}
	return (type * number);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi("123"));
	printf("%d\n", ft_atoi("9"));
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("4500"));
	printf("%d\n", ft_atoi("43a"));
	printf("%d\n", ft_atoi("+50"));
	printf("%d\n", ft_atoi("-943+-+--"));
	printf("%d\n", ft_atoi("  ---++-abcb45678"));
	return 0;
}
*/
