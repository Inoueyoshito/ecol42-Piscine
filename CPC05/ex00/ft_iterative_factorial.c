int	ft_iterative_factorial(int nb)
{
	int	num;
	int	i;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	num = 1;
	i = 2;
	while (i <= nb)
	{
		num = num * i;
		i++;
	}
	return (num);
}

/*
#include <stdio.h>
int	main(void)
{
	int num1 = 1;
	int num2 = 5;
	int num3 = 10;
	int num4 = 0;
	int num5 = -1;

	printf("%d! = %d\n", num1, ft_iterative_factorial(num1));
	printf("%d! = %d\n", num2, ft_iterative_factorial(num2));
	printf("%d! = %d\n", num3, ft_iterative_factorial(num3));
	printf("%d! = %d\n", num4, ft_iterative_factorial(num4));
	printf("%d! = %d\n", num5, ft_iterative_factorial(num5));
}
*/