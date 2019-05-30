/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:04:23 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/30 08:21:51 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *dest, *source;
	dest = (char *)dst;
	source = (char *)src;
	i = 0;
	while(i < len)
	{
		dest[i] = source[i];
		i++;
	}
	return(dest);
}
