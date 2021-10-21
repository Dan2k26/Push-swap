/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 01:05:45 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/21 19:54:25 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_list	*ft_rrotate_down(t_list **stack, int num)
{
	t_list	*temp;

	(void) num;
	temp = *stack;
	if (*stack == NULL)
		return (NULL);
	while (temp->next != NULL)
		temp = temp->next;
	ft_lstadd_front(stack, temp);
	return (temp);
}
