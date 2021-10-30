int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 0 || nb == 1)
		return (nb);
	i = 0;
	while (i < nb / 2)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}


#include <stdio.h>
#include <time.h>

int main(void)
{
	char s1 = 1;
	char s2 = 9;
	char s3 = 16;
	char s4 = -4;
	char s5 = 0;

	printf("%d : root %d\n", s1, ft_sqrt(s1));
	printf("%d : root %d\n", s2, ft_sqrt(s2));
	printf("%d : root %d\n", s3, ft_sqrt(s3));
	printf("%d : root %d\n", s4, ft_sqrt(s4));
	printf("%d : root %d\n", s5, ft_sqrt(s5));
	printf("%f秒\n", ((double)clock()) / CLOCKS_PER_SEC);
    return 0;
}

