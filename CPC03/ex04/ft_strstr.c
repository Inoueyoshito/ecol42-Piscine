char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find);

int    main(void)
{
    char    s1[] = "abcddefghijklmn";
    char    s2[] = "lmn";
    char    s3[] = "xyz";
    char    s4[] = "abcddefghijklmnopqr";
    char    s5[] = "";
    char    *sp1;
    char    *sp2;

    printf("----------Expected Output----------\n");
    sp1 = strstr(s1,s2);
    printf("match : %s\n", sp1);
    sp1 = strstr(s1,s3);
    printf("no match : %s\n", sp1);
    sp1 = strstr(s1,s4);
    printf("len(needle) > len(haystack): %s\n", sp1);
    sp1 = strstr(s1,s5);
    printf("empty string : %s\n", sp1);
    printf("----------Actual Output----------\n");
    sp2 = ft_strstr(s1,s2);
    printf("match : %s\n", sp2);
    sp2 = ft_strstr(s1,s3);
    printf("no match : %s\n", sp2);
    sp2 = ft_strstr(s1,s4);
    printf("len(needle) > len(haystack): %s\n", sp2);
    sp2 = ft_strstr(s1,s5);
    printf("empty string : %s\n", sp2);
}
