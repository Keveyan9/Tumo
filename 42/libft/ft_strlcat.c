/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skeveyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:44:55 by skeveyan          #+#    #+#             */
/*   Updated: 2022/04/02 15:45:09 by skeveyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc ;
	size_t	lendest ;
	size_t	n;

	lensrc = ft_strlen(src);
	lendest = ft_strlen(dst);
	n = 0;
	if (dstsize < lendest)
		return (lensrc + dstsize);
	while (src[n] && n <= dstsize)
	{
		dst[lendest + n ] = src[n];
		printf("--%lu--",lendest + n );
			printf("--%lu--\n",n );
		n++;
	}
	dst[n+1 ] = '\0';
	return (lendest + lensrc);
}
