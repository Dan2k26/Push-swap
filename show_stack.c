/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 04:57:20 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/24 04:58:21 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	show_list(t_list *lst, int num, char *msg)
{
	int	i;

	i = 0;
	printf("%s\n\n", msg);
	while (i < num)
	{
		printf("DIRECTION: %p\nData: %d\nNext node: %p\n\n", &lst->content, lst->content, lst->next);
		lst = lst->next;
		i++;
	}
}

void	show_stack_list_data(t_list	*lst, int num, char *msg)
{
	int	i;

	i = 0;
	printf("\n%s\n\n", msg);
	printf("LIST ||");
	while (i < num)
	{
		printf(" %d", lst->content);
		lst = lst->next;
		i++;
	}
	printf(" ||\n\n");
}

void	show_stack_B(int *nbrb, int num, char *msg)
{
	int	i;

	i = 0;
	printf("\n%s\n", msg);
	printf("B || ");
	while (i < num)
	{
		printf("%d ", nbrb[i]);
		i++;
	}
	printf("||\n\n");
}

void	show_stack_A(int *nbra, int num, char *msg)
{
	int	i;

	i = 0;
	printf("\n%s\n", msg);
	printf("\nA || ");
	while (i < num)
	{
		printf("%d ", nbra[i]);
		i++;
	}
	printf("||\n\n");
}
