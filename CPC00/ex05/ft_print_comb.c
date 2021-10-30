#include <unistd.h>

void	ft_print_comb(void);
void	number_print(int g_x, int g_y, int g_z);

char	g_x;
char	g_y;
char	g_z;
char	g_k;
char	g_s;

void	ft_print_comb(void)
{
	g_x = '0';
	g_y = '1';
	g_z = '2';
	while (g_x <= 55)
	{
		while (g_y <= 56)
		{
			while (g_z <= 57)
			{
				number_print(g_x, g_y, g_z);
				g_z++;
			}
			g_y++;
			g_z = g_y + 1;
		}
		g_y = g_x + 1;
		g_x++;
	}
}

void	number_print(int g_x, int g_y, int g_z)
{
	char	k;
	char	s;

	k = ',';
	s = ' ';
	write(1, &g_x, 1);
	write(1, &g_y, 1);
	write(1, &g_z, 1);
	if (!(g_x == 55 && g_y == 56 && g_z == 57))
	{
		write(1, &k, 1);
		write(1, &s, 1);
	}
}
