#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long int	inb;

	inb = (long long int)nb;
	if (inb < 0)
	{
		ft_putchar('-');
		inb = -inb;
	}
	if (inb >= 10)
	{
		ft_putnbr(inb / 10);
		ft_putchar(inb % 10 + '0');
	}
	else if (inb < 10)
	{
		ft_putchar(inb % 10 + '0');
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i++]);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
/*
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
#include <stdio.h>
int main(void)
{
	int ac;
	char **av;
	struct s_stock_str	*answer;

	ac = 3;
	av = (char **)malloc((ac + 1) * sizeof(char *));
	av[0] = "42";
	av[1] = "in";
	av[2] = "Tokyo";
	answer = ft_strs_to_tab(ac, av);
	ft_show_tab(answer);
}*/