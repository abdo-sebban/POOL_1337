/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:06:45 by asebban           #+#    #+#             */
/*   Updated: 2024/07/28 17:40:43 by yhossni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	frst(int j, int a)
{
	if (j == 1)
	{
		ft_putchar('A');
	}
	else if (j == a)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	mid(int j, int a)
{
	if (j == 1 || j == a)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	lst(int j, int a)
{
	if (j == 1)
	{
		ft_putchar('A');
	}
	else if (j == a)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	print_pattern(int i, int a, int b)
{
	int	j;
	while (i <= b)
	{
		j = 1;
		while (j <= a)
		{
			if (i == 1)
				frst(j, a);
			else if (i == b)
				lst(j, a);
			else
				mid(j, a);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	rush(int a, int b)
{
	int	i;

	i = 1;
	if (a <= 0 || b <= 0)
	{
		ft_putchar('\n');
		return ;
	}
	if (a + b > 4000)
	{
		write(1, "Limit of characters exceeded!\n", 30);
		return ;
	}
	print_pattern(i, a, b);
}
