/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skeveyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:29:28 by skeveyan          #+#    #+#             */
/*   Updated: 2022/04/11 15:29:30 by skeveyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res ;
	int	minus_counter;

	res = 0;
	minus_counter = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		||*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus_counter = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str)
	{
		res = (res * 10) +(*str - '0');
		str++;
	}
	return (res * minus_counter);
}