int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (*str++ != '\0')
	{
		length++;
	}
	return (length);
}

/*
#include <stdio.h>
int main(void)
{
	char s1[] = "42Tokyo";

	printf("%d\n", ft_strlen(s1));
	return (0);
}
*/
