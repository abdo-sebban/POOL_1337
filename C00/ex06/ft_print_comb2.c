/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:05:04 by asebban           #+#    #+#             */
/*   Updated: 2024/08/10 08:22:58 by asebban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_conv_num_char(int n)
{
	int	n1;
	int	n2;

	n1 = n / 10 + 48;
	n2 = n % 10 + 48;
	write(1, &n1, 1);
	write(1, &n2, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 < 100)
	{
		n2 = n1 + 1;
		while (n2 < 100)
		{
			ft_conv_num_char(n1);
			write(1, " ", 1);
			ft_conv_num_char(n2);
			if ((n1 + n2) != 197)
			{
				write(1, ", ", 2);
			}
			n2++;
		}
		n1++;
	}
}
