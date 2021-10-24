/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_of_sorting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:52:50 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/24 18:36:13 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static void	ft_3sort(t_list **stack, int num)
{
	t_list	*temp;
	t_list	*aux;
	int		cont;

	temp = *stack;
	aux = NULL;
	cont = 0;
	if (is_sorted(stack, num) == 0)
		exit(0);
	if (temp->content > temp->next->content)
		ft_swap(&temp, num, 0);
	if (temp->next->content > temp->next->next->content)
		ft_swap(&temp->next, num, 0);
	if (temp->content > temp->next->content)
		ft_swap(&temp, num, 0);
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
	// ft_rrotate_all(&stack_a, &stack_b, num);	
	// show_stack_list_data(stack_a, num, "STACK RRA");
	// ft_rotate_all(&stack_a, &stack_b, num);
	// show_stack_list_data(stack_a, num, "STACK RA");
	// ft_swap_all(&stack_a, &stack_b, num);
	// show_stack_list_data(stack_a, num, "STACK SA");
	//ft_push(&stack_a, &stack_b, num, 1);
	if (num == 2)
		ft_2sort(&stack_a, num);
	if (num == 3)
		ft_3sort(&stack_a, num);
	show_stack_list_data(stack_a, num, "ORDENADO");
}
