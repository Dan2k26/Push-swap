/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 01:05:45 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/16 02:47:13 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	*ft_ra(int **na, int **nb, int num)
{
	int	aux;
	int i;

	(void)nb;

	aux = *na[0];
	i = 1;
	show_stack_A(*na, num, "SHORTING ---> RA (BEFORE)");
	printf("--->AUX: %d\n", aux);
	printf("--->NA: %d\n", *na[1]);
	while (i < num)
	{
		*na[i - 1] = *na[i];
		printf("--->NUm: %d\n", i);
		i++;
	}
	show_stack_A(*na, num, "SHORTING ---> RA (AFTER)");
	return (0);
}
