//#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	char str1[] = "Lets Go Piscine";
	char str2[] = "12345";

	ft_strncpy(str1, str2, 20);
	printf("%s\n", str1);
	return (0);
}
*/
