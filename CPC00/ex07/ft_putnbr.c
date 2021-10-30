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
int main(void)
{
ft_putnbr(1);
write(1, "\n", 1);
ft_putnbr(2147483647);
write(1, "\n", 1);
ft_putnbr(-2147483648);
write(1, "\n", 1);
ft_putnbr(0);
write(1, "\n", 1);
ft_putnbr(5289);
write(1, "\n", 1);
ft_putnbr(-357680);
write(1, "\n", 1);
return (0);
}
*/
