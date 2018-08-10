/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 11:24:36 by tmulaud           #+#    #+#             */
/*   Updated: 2018/08/07 11:24:42 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void					*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*vdst;
	const unsigned char *vsrc;

	vdst = dst;
	vsrc = src;
	i = 0;
	while (i < n)
	{
		vdst[i] = vsrc[i];
		i++;
	}
	return (dst);
}
