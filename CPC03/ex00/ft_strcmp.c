int	ft_strcmp(char *s1, char *s2)
{
	char	*str1;
	char	*str2;

	str1 = s1;
	str2 = s2;
	while (*str1 != '\0' && *str2 != '\0')
	{
		if ((*str1 - *str2) == 0)
		{
			str1++;
			str2++;
		}
		else
		{
			return (*str1 - *str2);
		}
	}
	return (*str1 - *str2);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[20] = "abc";
	char s2[20] = "abcdefg";
	char s3[20] = "";

	printf("%s : %s => %d\n", s1, s2, ft_strcmp(s1, s2));
	printf("%s : %s => %d\n", s1, s3, ft_strcmp(s1, s3));
}
*/