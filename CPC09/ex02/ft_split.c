#include <stdlib.h>

int	ft_check_charset(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (str[i])
	{
		while (ft_check_charset(str[i], charset) && str[i])
			i++;
		if (!ft_check_charset(str[i], charset) && str[i])
			index++;
		while (!ft_check_charset(str[i], charset) && str[i])
			i++;
	}
	return (index);
}

char	*make_str(char *str, int count, char *charset)
{
	int		i;
	int		j;
	char	*tmp;

	i = count;
	j = 0;
	while (!ft_check_charset(str[i], charset) && str[i])
	{
		j++;
		i++;
	}
	tmp = malloc((j + 1) * sizeof(char));
	if (tmp == NULL)
		return (0);
	i = count;
	j = 0;
	while (!ft_check_charset(str[i], charset) && str[i])
	{
		tmp[j] = str[i];
		j++;
		i++;
	}
	tmp[j] = '\0';
	return (tmp);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		words;
	int		i;
	int		j;

	words = count_words(str, charset);
	result = malloc((words + 1) * sizeof(char *));
	if (result == NULL)
		return (0);
	result[words] = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		while (ft_check_charset(str[i], charset) && str[i])
			i++;
		if (!ft_check_charset(str[i], charset) && str[i])
		{
			result[j++] = make_str(str, i, charset);
			i++;
		}
		while (!ft_check_charset(str[i], charset) && str[i])
			i++;
	}
	return (result);
}

/*
#include <stdio.h>
int    main(void)
{
    char *s = "             ";
    char *charset = "   ";
    char **p;
    p = ft_split(s, charset);
    if (p == NULL)
        return (0);
    for (int i = 0; p[i] != NULL; i++)
    {
		printf("tab[%d] = %s\n", i, p[i]);
        //printf("%s\n", p[i]);
        // free(p[i]);
    }
    return (0);
}
*/