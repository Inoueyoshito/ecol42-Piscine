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

/*
#include <stdio.h>

void ft_putnbr(int nb);

int main(void)
{
	printf(" = putnbr 123");
	ft_putnbr(123);
	printf("\n = putnbr 0");
	ft_putnbr(0);
	printf("\n = putnbr -1");
	ft_putnbr(-1);
	printf("\n = putnbr 383838283");
	ft_putnbr(383838283);
	printf("\n = putnbr -594938488");
	ft_putnbr(-594938489);
	printf("\n");
	return (0);
}
*/
