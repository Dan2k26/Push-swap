/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:38:41 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/11 17:58:58 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	main(int argc, char **argv)
{
	int	num;

	if (argc > 1)
	{
		num = ft_check_errors(argv, argc);
		printf("%d", num);
		if (num > 0)
		{
			num = start_shorting(argc, argv, num);
			write(1, "OK\n", 3);
			system("leaks push_swap\n");
			return (0);
		}
		//num duplicado, texto no numerico, > MAXINT
		else if (num == -1)
			write(1, "Error\n", 6);
	}
	//solo un numero, nada numeros ordenados
	//system("leaks push_swap\n");
	return (0);
}
