#include <unistd.h>

void	ft_print_comb2(void);
void	print_front(int x);
void	print_back(int y);

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			if (x != y)
			{
				print_front(x);
				write(1, " ", 1);
				print_back(y);
				if (!(x == 98 && y == 99))
					write(1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}

void	print_front(int x)
{
	char	a;
	char	b;

	a = '0';
	b = '0';
	a = x / 10 + 48;
	b = x % 10 + 48;
	write(1, &a, 1);
	write(1, &b, 1);
}

void	print_back(int y)
{
	char	a;
	char	b;

	a = '0';
	b = '0';
	a = y / 10 + 48;
	b = y % 10 + 48;
	write(1, &a, 1);
	write(1, &b, 1);
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/