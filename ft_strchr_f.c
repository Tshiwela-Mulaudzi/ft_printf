/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 11:31:06 by tmulaud           #+#    #+#             */
/*   Updated: 2018/08/07 11:31:13 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			ft_strchr_f(char *s, int c)
{
	char		*tmp;

	tmp = s;
	while (*tmp != '\0')
	{
		if (*tmp == c)
			return (1);
		tmp++;
	}
	if (*tmp == '\0' && c == '\0')
		return (0);
	return (0);
}
