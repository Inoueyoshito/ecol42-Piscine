int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int		i;
	int		haut;
	int		bas;

	i = 0;
	haut = 0;
	bas = 0;
	while (i < lenght - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			haut++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			bas++;
		i++;
	}
	if (haut == i || bas == i)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int int_diff(int n1, int n2)
{
return (n1 - n2);
}

int main(void)
{
int arr1[] = {1, 2, 3, 4, 1};
int arr2[] = {5, 4, 3, 2, 3};
int arr3[] = {1, 2, 3, 4, 5};
int arr4[] = {5, 4, 3, 2, 1};
int arr5[] = {1, 1, 1, 1, 1};

printf("arr1: %d\n", ft_is_sort(arr1, 5, &int_diff));
printf("arr2: %d\n", ft_is_sort(arr2, 5, &int_diff));
printf("arr3: %d\n", ft_is_sort(arr3, 5, &int_diff));
printf("arr4: %d\n", ft_is_sort(arr4, 5, &int_diff));
printf("arr5: %d\n", ft_is_sort(arr5, 5, &int_diff));
return (0);
}
*/