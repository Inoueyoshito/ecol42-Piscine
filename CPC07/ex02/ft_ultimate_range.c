#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	count;
	int	i;

	if (min >= max)
	{
		range = 0;
		return (range);
	}
	else
	{
		count = max - min;
		range = (int *)malloc(sizeof(*range) * count);
		i = 0;
		while (min < max)
		{
			range[i] = min;
			min++;
			i++;
		}
	}
	return (range);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min >= max)
		return (0);
	if (range == NULL)
		return (-1);
	return (max - min);
}

/*
#include <stdio.h>

int main(void)
{
	int *p;
	int i = 0;
	int min = 1;
	int max = 10;
	int range_num = max - min;

	printf("return:%d\n", ft_ultimate_range(&p, 5, 15));
	while (i < range_num)
	{
		printf("%d", p[i]);
		printf("\n");
		i++;
	}
	return (0);
}
*/
