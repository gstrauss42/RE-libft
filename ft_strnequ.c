/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:44:51 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/31 09:24:09 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;
	i = 0;
	if((!s2 && s1) || (!s1 && s2))
		return(0);
	while(s1[i] == s2[i] && i < n)
	{
		if((s1[i] &&s2[i]) == '\0')
			return(1);
		i++;
	}
	return(0);
}
