int	ft_recursive_factorial(int nb)
{
	int	num;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	num = nb * ft_recursive_factorial(nb - 1);
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


	printf("%d! = %d\n", num1, ft_recursive_factorial(num1));
	printf("%d! = %d\n", num2, ft_recursive_factorial(num2));
	printf("%d! = %d\n", num3, ft_recursive_factorial(num3));
	printf("%d! = %d\n", num4, ft_recursive_factorial(num4));
	printf("%d! = %d\n", num5, ft_recursive_factorial(num5));
}
*/
