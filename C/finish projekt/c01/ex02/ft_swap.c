/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skeveyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:19:46 by skeveyan          #+#    #+#             */
/*   Updated: 2022/02/16 20:39:28 by skeveyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = 0;
	x = *a;
	*a = *b;
	*b = x ;
}
