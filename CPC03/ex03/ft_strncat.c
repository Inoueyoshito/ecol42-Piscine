char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (dest[c] != '\0')
		c++;
	while (src[d] != '\0' && d < nb)
	{
		dest[c + d] = src[d];
		d++;
	}
	dest[c + d] = '\0';
	return (dest);
}


#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[20] = "Spain";
	char s2[20] = "Barcelona";
	char s3[20] = " g";

	ft_strncat(s1, s2, 5);
	printf("%s\n", s1);
	ft_strncat(s1, s3, 2);
	printf("%s\n", s1);
}

