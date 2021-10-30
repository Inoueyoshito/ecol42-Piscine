#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	int	bign;
	int	bigp;

	bign = 78;
	bigp = 80;
	if (n < 0)
	{
		write(1, &bign, 1);
	}
	else
	{
		write(1, &bigp, 1);
	}
}
