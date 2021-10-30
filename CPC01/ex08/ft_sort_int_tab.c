void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	j = 0;
	while (j < size - 1)
	{
		i = j + 1;
		while (i <= size - 1)
		{
			if (tab[j] > tab[i])
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
			i++;
		}
		j++;
	}
}
/*
#include <stdio.h>
 
void	ft_sort_int_tab(int *tab, int size);

void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

int		main (void)
{
	int tab[] = {9, 8, 7, 6};
	int size;
	
	size = 4;

	printf("Original: ");
	putarr(tab, size);

	ft_sort_int_tab(tab, size);

	printf("I make: ");
	putarr(tab, size);
}
*/