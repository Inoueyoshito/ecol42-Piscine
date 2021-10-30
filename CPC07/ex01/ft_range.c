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

/*
#include <stdio.h>

int main(void)
{
	int *range;
	int i = 0;
	int min = 1;
	int max = 10;
	int range_num = max - min;

	range = ft_range(min, max);
	printf("min > max:%n", ft_range(10, 5));
	printf("\n");
	while (i < range_num)
	{
		printf("%d", range[i]);
		printf("\n");
		i++;
	}
}
*/
