/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:51:26 by asebban           #+#    #+#             */
/*   Updated: 2024/07/25 15:47:29 by asebban          ###   ########.fr       */
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
