int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

/*
#include <unistd.h>
void		ft_putchar(char c)
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
	if (inb < 10)
	{
		ft_putchar(inb % 10 + '0');
	}
}

int		ft_find_separator(char *str)
{
	int i;
	int boolean;

	i = 0;
	boolean = 0;
	while (str[i])
	{
		if (str[i] < '!')
			boolean = 1;
		i++;
	}
	return (boolean);
}

int 		main(void)
{
	char *arr[20] = {"Piscine is herd"};


	ft_putnbr(ft_count_if(arr, &ft_find_separator));
	ft_putchar('\n');

    return (0);
}
*/