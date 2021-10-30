int	ft_is_prime(int nb)
{
	int	i;
	int	flag;

	if (nb <= 1)
		return (0);
	i = 2;
	flag = 1;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			flag = 0;
		i++;
	}
	return (flag);
}

/*
#include <stdio.h>
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
	printf("%d, is %d\n", num1, ft_is_prime(num1));
	printf("%d, is %d\n", num2, ft_is_prime(num2));
	printf("%d, is %d\n", num3, ft_is_prime(num3));
	printf("%d, is %d\n", num4, ft_is_prime(num4));
}
*/
