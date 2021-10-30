#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	n;

	n = 0;
	while (*src++ != '\0')
	{
		n++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char *strcpy = "ABCDEFG";
	char *dup = "abcdefg";

	printf("strcpy = %s\n", ft_strdup(strcpy));
	printf("dup = %s\n", ft_strdup(dup));
}
*/