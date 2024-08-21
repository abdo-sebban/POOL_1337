/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:17:12 by asebban           #+#    #+#             */
/*   Updated: 2024/08/01 19:23:29 by asebban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	k;

	k = 1;
	if (nb < 0)
	{
		k *= -1;
		nb *= -1;
	}
	if (nb > 1)
	{
		k *= nb;
		k *= ft_recursive_factorial(nb -1);
	}
	return (k);
}