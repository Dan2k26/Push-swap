/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 01:05:45 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/20 20:02:02 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_ra(t_list **stack_a, t_list **stack_b, int num)
{
	t_list	*temp;

	temp = *stack_a;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	show_list(temp, "TEEEMP");
	(void) stack_b;
	(void) num;
	show_stack_list_data(*stack_a, "STACK A RA");

}
