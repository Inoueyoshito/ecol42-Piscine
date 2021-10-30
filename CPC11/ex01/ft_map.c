#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int		i;
	int		*res;

	res = malloc(sizeof(int) * lenght);
	i = -1;
	while (++i < lenght)
		res[i] = (*f)(tab[i]);
	return (res);
}

/*
#include <stdio.h>

int    test_minus(int n)
{
    n = n * -1;
    return (n);
}

int    main(void)
{
    int    array[6] = {10, 3, -5, 4, 3, 0};
    int    *array2;
    int    i;
    int    n;

    n = 6;
    i = 0;
    while (i < 6)
    {
        printf("%d, ", array[i]);
        i++;
    }
    printf("\n");
    array2 = ft_map(array, n, &test_minus);
    i = 0;
    while (i < n)
    {
        printf("%d, ", array2[i]);
        i++;
    }
    printf("\n");
    free(array2);
//    system("leaks a.out");
    return (0);
}
*/