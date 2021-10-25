/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_sp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 00:30:28 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/25 20:08:26 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_swap(t_list **stack, int num, int type)
{
	t_list	*temp;
	t_list	*aux;

	(void) num;
	temp = *stack;
	aux = malloc(sizeof(t_list));
	if (*stack == NULL || ft_lstsize(*stack) <= 1 || aux == NULL)
		return ;
	aux->next = NULL;
	aux->content = temp->next->content;
	temp->next->content = temp->content;
	temp->content = aux->content;
	if (type == 0)
		write(1, "sa\n", 3);
	else
		write(1, "sb\n", 3);
}

void	ft_swap_all(t_list **stack_a, t_list **stack_b, int num)
{
	(void)num;
	if (stack_b != NULL || stack_a != NULL)
	{
		ft_swap(stack_a, num, 0);
		ft_swap(stack_b, num, 1);
		write(1, "ss\n", 3);
	}
}

void	ft_push(t_list **stack1, t_list **stack2, int num, int type)
{
	t_list	*temp;
	int		i;

	(void) num;
	(void) stack2;
	temp = *stack1;
	i = 0;
	if (*stack1 == NULL || ft_lstsize(*stack1) <= 1)
		return ;
	
	show_list(*stack2, num, "STACK B");
	if (type == 0)
		write(1, "pa\n", 3);
	else
		write(1, "pb\n", 3);
}
