/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstend.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 09:17:32 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/16 08:08:46 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstend(t_list *head, t_list *new)
{
	t_list *count;

	if (head)
	{
		count = head;
		while (count)
		{
			if (count->next)
				count = count->next;
			if (!count->next)
				break;
		}
		if (!new)
			return;
		count->next = new;
		new->next = NULL;
	}
}
