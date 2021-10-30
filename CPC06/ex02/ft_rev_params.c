#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	s;
	int	c;

	if (argc > 1)
	{
		s = argc - 1;
		while (s > 0)
		{
			c = 0;
			while (argv[s][c])
			{
				ft_putchar(argv[s][c]);
				c++;
			}
			ft_putchar('\n');
			s--;
		}
	}
	return (0);
}
