/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_of_sorting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:52:50 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/29 23:50:36 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"



static void	ft_2sort(t_list **stack, int num)
{
	t_list	*temp;

	temp = *stack;
	if (temp->content > temp->next->content)
		ft_swap(&temp, num, 0);
	else
		exit(0);
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
	if (is_sorted(stack, num) != 0)
	{
		ft_rrotate_down(stack, num, 0);
		if (is_sorted(stack, num) != 0)
			ft_swap(stack, num, 0);
	}
}

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
		ft_swap(stack_b, num, 1);
	if (ft_lstsize(*stack_a) == 3 && is_sorted(stack_a, num) != 0)
		ft_3sort(stack_a, num);
	if (ft_lstsize(*stack_a) == 2 && is_sorted(stack_a, num) != 0)
		ft_2sort(stack_a, num);
	ft_push(stack_b, stack_a, num, 0);
	ft_push(stack_b, stack_a, num, 0);
}

static void		ft_6radix(t_list **stack_a, t_list **stack_b, int num)
{
	int		i;
	int		pos;
	t_list	*temp;

	i = 0;
	pos = 0;
	temp = *stack_a;
	if (is_sorted(stack_a, num) == 0)
		exit(0);
	while(is_sorted(stack_a, num) != 0)
	{
		if (ft_binary(temp->content, pos) == 1)
		{
			temp = temp->next;
			ft_push(stack_a, stack_b, num, 1);
		}
		else
		{
			temp = temp->next;
			ft_rotate_up(stack_a, num, 0);
		}
		if (i == num - 1)
		{
			while (ft_lstsize(*stack_b) != 0)
				ft_push(stack_b, stack_a, num, 0);	
			temp = *stack_a;
			pos++;
			i = -1;
		}
		i++;
	}
}

void	types_of_sorting(t_list *stack_a, int num)
{
	t_list	*stack_b;

	stack_b = NULL;
	if (num == 2)
		ft_2sort(&stack_a, num);
	if (num == 3)
		ft_3sort(&stack_a, num);
	if (num == 4 || num == 5)
		ft_45sort(&stack_a, &stack_b, num);
	if (num >= 6)
		ft_6radix(&stack_a, &stack_b, num);
}
