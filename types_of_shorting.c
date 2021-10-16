/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_of_shorting.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:52:50 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/16 03:09:23 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static void	two_shorting(int **na, int **nb, int num)
{
	if (*na[0] == 1)
		exit(0);
	else
		ft_ra(na, nb, num);
}

void	types_of_shorting(int **na, int **nb, int num)
{
	//int *_na = &na[1];
	if (num == 2)
		two_shorting(na[0], nb, num);
}
