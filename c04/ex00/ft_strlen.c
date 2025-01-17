/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebban <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:21:19 by asebban           #+#    #+#             */
/*   Updated: 2024/07/30 09:22:48 by asebban          ###   ########.fr       */
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
