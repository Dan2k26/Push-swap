/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_of_shorting.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:52:50 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/21 19:53:38 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	types_of_shorting(t_list **stack_a, int num)
{
	t_list  *copy_a;
	t_list  *copy_b;
	t_list	*stack_b;

	copy_a = *stack_a;
	stack_b = NULL;
	copy_b = stack_b;
	ft_rrotate_down(&copy_a, num);
	ft_rrotate_down(&copy_b, num);
	show_stack_list_data(copy_a, num, "COPY A");
}
