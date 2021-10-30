void	ft_ultimate_div_mod(int *a, int *b)
{
	int	box1;
	int	box2;

	box1 = *a / *b;
	box2 = *a % *b;
	*a = box1;
	*b = box2;
}
