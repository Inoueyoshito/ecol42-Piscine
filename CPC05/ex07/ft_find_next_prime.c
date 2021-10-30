int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}


#include <stdio.h>
#include <time.h>
int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;

	num1 = 2;
	num2 = 7;
	num3 = 4;
	num4 = 70;
	printf("%d, is %d\n", num1, ft_find_next_prime(num1));
	printf("%d, is %d\n", num2, ft_find_next_prime(num2));
	printf("%d, is %d\n", num3, ft_find_next_prime(num3));
	printf("%d, is %d\n", num4, ft_find_next_prime(num4));
	printf("%f秒\n", ((double)clock()) / CLOCKS_PER_SEC);
    return 0;
}

