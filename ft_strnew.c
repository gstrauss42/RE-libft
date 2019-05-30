/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:14:56 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/30 08:29:24 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_strnew(size_t size)
{
	size_t i;
	i = 0;
	char *new;
	new = (char *) malloc(size * sizeof(char));
	while (size < i)
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}
