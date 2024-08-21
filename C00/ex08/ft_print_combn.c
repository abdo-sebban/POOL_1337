/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:34:13 by asebban           #+#    #+#             */
/*   Updated: 2024/08/10 12:49:14 by asebban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_max(int nb)
{
	int	tab[10];

	tab[0] = 0;
	tab[1] = 9;
	tab[2] = 89;
	tab[3] = 789;
	tab[4] = 6789;
	tab[5] = 56789;
	tab[6] = 456789;
	tab[7] = 3456789;
	tab[8] = 23456789;
	tab[9] = 123456789;
	return (tab[nb]);
}

int	ft_sort(char *nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (nb[i])
	{
		j = i + 1;
		while (nb[j])
		{
			if (nb[i] >= nb[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_power(int nb)
{
	int	tab[10];

	tab[0] = 1;
	tab[1] = 10;
	tab[2] = 100;
	tab[3] = 1000;
	tab[4] = 10000;
	tab[5] = 100000;
	tab[6] = 1000000;
	tab[7] = 10000000;
	tab[8] = 100000000;
	tab[9] = 1000000000;
	return (tab[nb]);
}

void	ft_string(char *result, int nb, int nb2)
{
	int	i;

	i = 0;
	while (nb != 0)
	{
		result[i] = '0' + (nb2 / ft_power(nb - 1));
		nb--;
		nb2 = nb2 % ft_power(nb);
		i++;
	}
	result[i] = '\0';
}

void	ft_print_combn(int n)
{
	int		i;
	int		j;
	char	result[11];

	i = 12345678;
	if (n <= 0 || n >= 10)
		return ;
	while (i < ft_power(n))
	{
		ft_string(result, n, i);
		if (ft_sort(result) == 1)
		{
			j = 0;
			while (result[j])
			{
				write (1, &result[j], 1);
				j++;
			}
			if (ft_max(n) == i)
				break ;
			write (1, ", ", 2);
		}
		i++;
	}
}
#include <stdio.h>
int	main()
{
	ft_print_combn(9);
}
