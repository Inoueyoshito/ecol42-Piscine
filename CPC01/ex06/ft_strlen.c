#include <unistd.h>

int	ft_strlen(char *str)
{
	int	cunt;

	cunt = 0;
	while (*str != '\0')
	{
		cunt++;
		str++;
	}
	return (cunt);
}
