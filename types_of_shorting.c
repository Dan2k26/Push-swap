/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_of_shorting.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:52:50 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/23 20:35:25 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	types_of_shorting(t_list *stack_a, int num)
{
	t_list	*stack_b;

	stack_b = NULL;
	ft_rrotate_all(&stack_a, &stack_b, num);	
	show_stack_list_data(stack_a, num, "STACK A");
}
