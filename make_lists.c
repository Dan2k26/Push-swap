/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_lists.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 04:56:25 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/24 04:56:27 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_list	*make_lists(int *nbr, int len)
{
	t_list	*list;
	t_list	*node;
	int		i;

	list = NULL;
	node = ft_lstnew(nbr[len - 1]);
	list = node;
	i = len - 2;
	while (i >= 0)
	{
		node = ft_lstnew(nbr[i]);
		ft_lstadd_front(&list, node);
		i--;
	}
	return (list);
}
