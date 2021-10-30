int	ft_fibonacci(int index)
{
	int	num;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	num = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (num);
}

/*
#include <stdio.h>

int main(void)
{
	char f_index1 = 0;
	char f_index2 = 10;
	char f_index3 = 1;
	char f_index4 = -1;
	int i;

	i = 0;
	printf("%d......%d\n", f_index1, ft_fibonacci(f_index1));
	printf("%d......%d\n", f_index2, ft_fibonacci(f_index2));
	printf("%d......%d\n", f_index3, ft_fibonacci(f_index3));
	printf("%d......%d\n", f_index4, ft_fibonacci(f_index4));
	printf("-40.....");
	while (i < 40)
	{
		printf("%d, ", ft_fibonacci(i));
		i++;
	}
	printf("\n");
	return (0);
}
*/