#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char s1[] = "Faitin";
	char *p_str;

	p_str = s1;
	ft_putstr(s1);
}
*/
