/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:48:06 by asebban           #+#    #+#             */
/*   Updated: 2024/08/01 19:53:13 by asebban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	countre;

	countre = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (countre <= nb)
	{
		if (countre * countre == nb)
			return (countre);
		else
			countre++;
	}
	return (0);
}
