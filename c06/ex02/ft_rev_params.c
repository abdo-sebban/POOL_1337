/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 09:33:05 by asebban           #+#    #+#             */
/*   Updated: 2024/08/03 11:29:02 by asebban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
	{
		return (0);
	}
	else
	{
		i = 0;
		j = argc - 1;
		while (j > 0)
		{
			while (argv[j][i] != '\0')
			{
				write (1, &argv[j][i], 1);
				i++;
			}
			i = 0;
			write (1, "\n", 1);
			j--;
		}
		return (0);
	}
}
