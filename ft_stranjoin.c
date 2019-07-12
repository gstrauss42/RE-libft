/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:43:17 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/12 14:53:32 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stranjoin(char *s1, char *s2, char c)
{
	int		i;
	int		q;
	int		o;
	char	*ret;

	q = 0;
	i = 0;
	o = ft_strnlen(s2, c) + 1;
	ret = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if(!ret)
		return(NULL);
	while (s1 && s1[i] != '\0')
		ret[q++] = s1[i++];
	while (s2 &&s2[o] != '\0')
		ret[q++] = s2[o++];
	ret[q] = '\0';
	return (ret);
}
