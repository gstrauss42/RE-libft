/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:04:44 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/30 08:22:05 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(char *b, int c, size_t len)
{
	size_t i;
	i = 0;
	while(i < len)
	{
		b[i] = c;
		i++;
	}
	return(b);
}
