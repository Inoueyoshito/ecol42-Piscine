void	ft_foreach(int *tab, int lenght, void (*f)(int))
{
	int	i;

	i = -1;
	while (++i < lenght)
		(*f)(tab[i]);
}

/*
#include <unistd.h>

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
	if (inb < 10)
	{
		ft_putchar(inb % 10 + '0');
	}
}

int	main(void)
{
	int	tmp[] = {1,2,3,4,5,6,7,8,9};
	ft_foreach(tmp, 9, &ft_putnbr);

	ft_putchar('\n');
	return (0);
}
*/