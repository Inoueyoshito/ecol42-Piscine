int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	i = 1;
	num = nb;
	while (i < power)
	{
		num = num * nb;
		i++;
	}
	return (num);
}

/*
#include <stdio.h>
int main(void)
{
	char num1 = 1;
	char num2 = 10;
	char num3 = -1;
	char num4 = 0;
	char num5 = 5;
	char pow1 = 3;
	char pow2 = 0;

	printf("%d^%d = %d\n", num1, pow1, ft_iterative_power(num1, pow1));
	printf("%d^%d = %d\n", num2, pow1, ft_iterative_power(num2, pow1));
	printf("%d^%d = %d\n", num3, pow1, ft_iterative_power(num3, pow1));
	printf("%d^%d = %d\n", num4, pow2, ft_iterative_power(num4, pow2));
	printf("%d^%d = %d\n", num5, 100, ft_iterative_power(num5, 100));
	return (0);
}
*/