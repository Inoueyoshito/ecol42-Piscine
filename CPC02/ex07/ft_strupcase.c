char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
	char str1[] = "abcde";
	char str2[] = "";

	ft_strupcase(str1);
	printf("%s\n", str1);
}
*/
