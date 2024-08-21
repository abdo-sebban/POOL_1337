/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:32:48 by asebban           #+#    #+#             */
/*   Updated: 2024/07/31 09:14:01 by asebban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	while (str[i] != '\0')
	{
		a++;
		i++;
	}
	return (a);
}

void	ft_printreverse(char *str)
{
	int	index;

	index = ft_strlen(str) - 1;
	while (index >= 0)
	{
		write (1, &str[index], 1);
		index--;
	}
}

int	base_ff(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (1);
	j = 1;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		if (base[i] == base[j] && base[j] != '\0')
			return (1);
		j++;
		i++;
	}
	return (0);
}

int	nber(int nb)
{
	int	b;

	b = 0;
	if (nb < 0)
	{
		write (1, "-", 1);
		b = -nb;
	}
	return (b);
}

void    ft_putnbr_base(int nbr, char *base)
{
	int		nb;
	int		i;
	int		x;
	int		calc;
	char	result[100];

	x = base_ff(base);
	i = 0;
	nb = nbr;
	if (x == 0)
	{
		nb = nber(nb);
		while (nb > 0)
		{
			calc = nb % ft_strlen(base);
			result[i] = base[calc];
			nb /= ft_strlen(base);
			i++;
		}
		result[i] = '\0';
		ft_printreverse(result);
	}
}
/*int	main ()
{
	ft_putnbr_base(-44,"0123456789abcdef");
	return 0;
}*/
