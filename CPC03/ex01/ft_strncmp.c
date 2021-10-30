/*int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;
	int				diff;

	c = 0;
	diff = 0;
	while ((c < n) && !diff && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		diff = (unsigned char)s1[c] - (unsigned char)s2[c];
		c++;
	}
	if (c < n && !diff && (s1[c] == '\0' || s2[c] == '\0'))
		diff = (unsigned char)s1[c] - (unsigned char)s2[c];
	return (diff);
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	ans;
	unsigned int	i;

	ans = 0;
	i = 0;
	while (i < n && *s1 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			ans = *s1 - *s2;
		}
		i++;
	}
	return (ans);
}



#include <stdio.h>
#include <string.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n);

int    main(void)
{
    char    str[] = "ABCDE";

    printf("----------Expected Output----------\n");
    printf("ABCDE: ABCDE , n=%d   =>   %d\n", 3, strncmp(str, "ABCDE", 3));
    printf("ABCDE: ABD   , n=%d   =>   %d\n", 0, strncmp(str, "ABD", 0));
    printf("ABCDE: ABCC  , n=%d   =>   %d\n", 8, strncmp(str, "ABCC", 8));
    printf("ABCDE: ABCD  , n=%d   =>   %d\n", 8, strncmp(str, "ABCD", 8));
    printf("ABCDE: AB    , n=%d   =>   %d\n", 2, strncmp(str, "AB", 2));
    printf("ABCDE: B     , n=%d   =>   %d\n", 2, strncmp(str, "B", 2));
    printf("ABCDE: A     , n=%d   =>   %d\n", 2, strncmp(str, "A", 2));
    printf("ABCDE: A     , n=%d   =>   %d\n", 2, strncmp(str, "A", 2));
    printf("----------Actual Output----------\n");
    printf("ABCDE: ABCDE , n=%d   =>   %d\n", 3, ft_strncmp(str, "ABCDE", 3));
    printf("ABCDE: ABD   , n=%d   =>   %d\n", 0, ft_strncmp(str, "ABD", 0));
    printf("ABCDE: ABCC  , n=%d   =>   %d\n", 8, ft_strncmp(str, "ABCC", 8));
    printf("ABCDE: ABCD  , n=%d   =>   %d\n", 8, ft_strncmp(str, "ABCD", 8));
    printf("ABCDE: AB    , n=%d   =>   %d\n", 2, ft_strncmp(str, "AB", 2));
    printf("ABCDE: B     , n=%d   =>   %d\n", 2, ft_strncmp(str, "B", 2));
    printf("ABCDE: A     , n=%d   =>   %d\n", 2, ft_strncmp(str, "A", 2));
    printf("ABCDE: A     , n=%d   =>   %d\n", 2, strncmp(str, "A", 2));
    return (0);
}
