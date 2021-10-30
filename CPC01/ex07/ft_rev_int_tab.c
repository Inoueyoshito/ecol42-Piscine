void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	index;
	int	temp;

	i = 0;
	index = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[index];
		tab[index] = temp;
		i++;
		index--;
	}
}

/*
#include <stdio.h>
 
void	ft_rev_int_tab(int *tab, int size);

void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

int	main(void)
{
	int tab[] = {1, 2, 3, 4};
	int size;
	
	size = 4;

	printf("Original: ");
	putarr(tab, size);

	ft_rev_int_tab(tab, size);

	printf("I make: ");
	putarr(tab, size);
}
*/