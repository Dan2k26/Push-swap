/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 01:05:45 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/30 18:33:40 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

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
		write(1, "rra\n", 4);
	else if (type == 1)
		write(1, "rrb\n", 4);
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

void	ft_rotate_up(t_list **stack, int num, int type)
{
	t_list	*temp;

	(void) num;
	temp = *stack;
	if (*stack == NULL || ft_lstsize(*stack) <= 1)
		return ;
	ft_lstadd_back(stack, temp);
	*stack = temp->next;
	temp->next = NULL;
	if (type == 0)
		write(1, "ra\n", 3);
	else if (type == 1)
		write(1, "rb\n", 3);
}

void	ft_rotate_all(t_list **stack_a, t_list **stack_b, int num)
{
	(void)num;
	if (stack_b != NULL || stack_a != NULL)
	{
		ft_rotate_up(stack_a, num, 2);
		ft_rotate_up(stack_b, num, 2);
		write(1, "rr\n", 3);
	}
}
