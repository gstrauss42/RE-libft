/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:03:56 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/30 08:20:29 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void  *dst, const void *src, size_t n)
{
	size_t i;
	char *dest, *source;
	
	dest = (char *)dst;
	source= (char *)src;
	i = 0;
	while(i < n)
	{
		dest[i] = source[i];
		i++;
	}
	i = 0;
	while(dest[i] != '\0')
		i++;
	return(dest);
}
