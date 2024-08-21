/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:26:41 by asebban           #+#    #+#             */
/*   Updated: 2024/08/08 15:26:19 by asebban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int ac, char **av)
{
	int		j;
	int		i;
	char	*garage;

	j = 1;
	while (j < ac - 1)
	{
		i = 1;
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				garage = av[i];
				av[i] = av[i + 1];
				av[i + 1] = garage;
			}
			i++;
		}
		j++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	ft_sort_params(ac, av);
	while (i < ac)
	{
		ft_putstr(av[i]);
		i++;
	}
	return (0);
}
