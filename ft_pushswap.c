/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:38:41 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/08 18:45:42 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int main	(int argc, char **argv)
{
	if (argc > 1)
	{
		if (ft_check_errors(argv, argc) != 0)
		{
			write(1, "OK", 2);
			system("leaks push_swap\n");
			return (0);
		}
	}
	write(1, "Error", 5);
	printf("\n");
	system("leaks push_swap\n");
	return (0);
}
