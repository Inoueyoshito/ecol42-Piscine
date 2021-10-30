char	*ft_strcat(char *dest, char *src)
{
	char	*p;

	p = dest;
	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[20] = "42";
	char s2[20] = "Tokyo";
	char s3[20] = "piscine";
	char s4[20] = "OK";
	char s5[20] = "";

	printf("%s\n", strcat(s1, s2));
	printf("%s\n", ft_strcat(s1, s2));
	printf("%s\n", strcat(s2, s3));
	printf("%s\n", ft_strcat(s2, s3));
	printf("%s\n", strcat(s4, s5));
	printf("%s\n", ft_strcat(s4, s5));
}
*/
