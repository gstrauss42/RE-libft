/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:14:56 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/27 12:32:57 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *	ft_strnew(size_t size)
{
	int i;
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
