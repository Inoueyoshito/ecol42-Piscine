int	ft_any(char **tab, int (*f)(char*))
{
	int		i;

	i = -1;
	while (tab[++i] != 0)
		if ((*f)(tab[i]) != 0)
			return (1);
	return (0);
}

/*
#include <unistd.h>	

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	while(*str)
		ft_putchar(*str++);
}

int		ft_find_separator(char *str)
{
	int i;
	int boolean;

	i = 0;
	boolean = 0;
	while (str[i])
	{
		if (str[i] < '!')
			boolean = 1;
		i++;
	}
	return (boolean);
}


int 		main(void)
{

	char *arr[1] = {"Piscine enjoy finish"};

	if(ft_any(arr, &ft_find_separator))
		ft_putstr("TRUE\n");
	else
		ft_putstr("FALSE\n");

    return (0);
}
*/