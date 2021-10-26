/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_of_sorting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:52:50 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/26 21:14:46 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static void	ft_45sort(t_list **stack_a, t_list **stack_b, int num)
{
	t_list	*temp;

	while (ft_lstsize(*stack_b) != 2)
	{
		temp = *stack_a;
		if (temp->content == 1 || temp->content == 2)
			ft_push(stack_a, stack_b, num, 1);
		else
			ft_rotate_up(stack_a, num, 0);
	}
	if (is_sorted(stack_b, num) == 0)
		ft_swap(stack_b, num, 0);
	while (is_sorted(stack_a, num) != 0)
		ft_rotate_up(stack_a, num, 0);
}

static void	ft_3sort(t_list **stack, int num)
{
	t_list	*temp;
	t_list	*aux;

	temp = *stack;
	aux = NULL;
	if (is_sorted(stack, num) == 0)
		exit(0);
	if (temp->content > temp->next->content)
		ft_swap(stack, num, 0);
	if (temp->content > temp->next->next->content)
		ft_rrotate_down(stack, num, 0);
	if (temp->content == 1 && temp->next->content == 3)
	{
		ft_rrotate_down(stack, num, 0);
		if (is_sorted(stack, num) != 0)
			ft_swap(stack, num, 0);
	}
}

static void	ft_2sort(t_list **stack, int num)
{
	t_list	*temp;

	temp = *stack;
	if (temp->content > temp->next->content)
		ft_swap(&temp, num, 0);
	else
		exit(0);
}

void	types_of_sorting(t_list *stack_a, int num)
{
	t_list	*stack_b;

	stack_b = NULL;
	if (num == 2)
		ft_2sort(&stack_a, num);
	if (num == 3)
		ft_3sort(&stack_a, num);
	if (num < 6)
		ft_45sort(&stack_a, &stack_b, num);
	show_stack_list_data(stack_a, num, "ORDENADO A");
	show_stack_list_data(stack_b, num, "ORDENADO B");
}
