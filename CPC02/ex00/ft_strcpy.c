//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/*
#include <unistd.h>

int main(void)
{
	char str1[] = "Good Piscine";
	char str2[] = "Perfect 42";

	ft_strcpy(str1, str2);
	printf("%s\n", str1);

	ft_strcpy(str1, "Tired Piscine");
	printf("%s\n", str1);
	return (0);
}
*/
