/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:59:25 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/05 10:18:32 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else if (c < 58 && c > 47)
		return (1);
	else
		return (0);
}
