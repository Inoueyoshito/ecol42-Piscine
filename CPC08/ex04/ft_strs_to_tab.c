#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;
	int		i;

	i = 0;
	size = 0;
	size = ft_strlen(src);
	dest = malloc((size + 1) * sizeof(char));
	if (dest == NULL)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*s_tab;
	int				i;

	i = 0;
	s_tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (s_tab == NULL)
		return (0);
	while (av[i] && i < ac)
	{
		s_tab[i].size = ft_strlen(av[i]);
		s_tab[i].str = av[i];
		s_tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_tab[i].size = 0;
	s_tab[i].str = 0;
	s_tab[i].copy = 0;
	return (s_tab);
}
/*
#include <stdio.h>

int main(void)
{
    int                 i;
    int                 ac;
    char                **av;
    struct s_stock_str  *test;

    ac = 5;
    av = (char **)malloc((ac + 1) * sizeof(char *));
    av[0] = "abc";
    av[1] = "defg";
    av[2] = "hijkl";
    av[3] = "mnopqr";
    av[4] = "stuvwxwz";
    test = ft_strs_to_tab(ac, av);
    i = 0;
    while (i < ac)
    {
        printf("i = %d\n", i);
        printf("     size : %d\n", test[i].size);
        printf("      str : %s : %p\n", test[i].str, test[i].str);
        printf("     copy : %s : %p\n", test[i].copy, test[i].copy);
        printf("---------------------------------------\n");
        i++;
    }
    return (0);
}*/