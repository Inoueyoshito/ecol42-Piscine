int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
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

	printf("%d^%d = %d\n", num1, pow1, ft_recursive_power(num1, pow1));
	printf("%d^%d = %d\n", num2, pow1, ft_recursive_power(num2, pow1));
	printf("%d^%d = %d\n", num3, pow1, ft_recursive_power(num3, pow1));
	printf("%d^%d = %d\n", num4, pow2, ft_recursive_power(num4, pow2));
	printf("%d^%d = %d\n", num5, 100, ft_recursive_power(num5, 100));
	return (0);
}
*/