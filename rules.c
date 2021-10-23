/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 01:05:45 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/23 20:35:43 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_rrotate_down(t_list **stack, int num, int type)
{
	t_list	*temp;
	t_list	*stop;

	(void) num;
	temp = *stack;
	if (*stack == NULL || ft_lstsize(*stack) <= 1)
		return ;
	while (temp->next != NULL)
	{
		stop = temp;
		temp = temp->next;
	}
	ft_lstadd_front(stack, temp);
	stop->next = NULL;
	if (type == 0)
		write(1, "ra\n", 3);
	else
		write(1, "rb\n", 3);	
}

void	ft_rrotate_all(t_list **stack_a, t_list **stack_b, int num)
{
	(void)num;
	if (stack_b != NULL || stack_a != NULL)
	{
		ft_rrotate_down(stack_a, num, 0);
		ft_rrotate_down(stack_b, num, 1);
		write(1, "rrr\n", 4);
	}
}

