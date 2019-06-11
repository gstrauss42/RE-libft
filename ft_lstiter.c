/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 11:11:38 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/11 11:39:46 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *present;
	t_list *next;

	present = lst;
	if ((lst != NULL) && (f != NULL))
	{
		while (present != NULL)
		{
			next = present->next;
			f(present);
			present = next;
		}
	}
}
