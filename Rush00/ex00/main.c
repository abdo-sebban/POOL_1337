/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 10:57:40 by asebban           #+#    #+#             */
/*   Updated: 2024/07/28 17:34:03 by yhossni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int a, int b);

int	l(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while ((str[i] >= 9 && str[i] <= 13
			&& str[i] != '\0') || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-')
	{
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (str[i] != '\0' && (str[i] <= 57 && str[i] >= 48))
	{
		len++;
		i++;
	}
	return (len);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	number;

	i = 0;
	number = 0;
	n = 1;
	while ((str[i] >= 9 && str[i] <= 13
			&& str[i] != '\0') || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] <= 57 && str[i] >= 48)
	{
		number *= 10;
		number += (str[i] - '0');
		i++;
	}
	return (number * n);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "You must provide 2 arguments!\n", 30);
		return (0);
	}
	if (l(argv[1]) > 4 || l(argv[2]) > 4)
	{
		write(1, "Limit exceeded!\n", 16);
		return (0);
	}
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
