#include <unistd.h>

void	ft_puchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		i = 0;
		while (argv[0][i])
			ft_puchar(argv[0][i++]);
		ft_puchar('\n');
	}
	return (0);
}
