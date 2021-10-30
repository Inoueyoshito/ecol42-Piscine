unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	d;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	c = ft_strlen(dest);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}


#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[20] = "42";
	char s2[20] = "Tokyo";
	char s3[20] = "";

	strlcat(s1, s2, 8);
	printf("%s\n", s1);
	strlcat(s2, s3, 1);
	printf("%s\n", s2);

	ft_strlcat(s1, s2, 8);
	printf("%s\n", s1);
	ft_strlcat(s2, s3, 1);
	printf("%s\n", s2);
}
