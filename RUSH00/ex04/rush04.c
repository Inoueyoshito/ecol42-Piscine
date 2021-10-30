/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokimoto </var/mail/tokimoto>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 12:04:47 by tokimoto          #+#    #+#             */
/*   Updated: 2021/10/03 12:04:47 by tokimoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);
void	row_func(char left, char middle, char right, int x);

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1 )
		{
			row_func('A', 'B', 'C', x);
		}
		else if (i == y)
		{
			row_func('C', 'B', 'A', x);
		}
		else
		{
			row_func('B', ' ', 'B', x);
		}
		if (i == y)
		{
			break ;
		}
		i++;
	}
}

void	row_func(char left, char middle, char right, int x)
{
	int	j;

	j = 1;
	while (j <= x)
	{
		if (j == 1)
		{
			ft_putchar(left);
		}
		else if (j == x)
		{
			ft_putchar(right);
			ft_putchar('\n');
			break ;
		}
		else
		{
			ft_putchar(middle);
		}
		if (j == x)
		{
			ft_putchar('\n');
		}
		j++;
	}
}
