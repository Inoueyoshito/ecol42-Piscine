/*
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*heap;
	int		i;

	i = 0;
	heap = malloc(ft_strlen(src) + 1);
	if (heap == 0)
		return (NULL);
	while (src[i])
	{
		heap[i] = src[i];
		i++;
	}
	heap[i] = 0;
	return (heap);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	t_stock_str	*answer;

	answer = malloc(sizeof(t_stock_str) * (ac + 1));
	if (answer == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		answer[i].size = ft_strlen(av[i]);
		answer[i].str = av[i];
		answer[i].copy = ft_strdup(av[i]);
		i++;
	}
	answer[i].str = 0;
	return (answer);
}
*/