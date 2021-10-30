/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:38:41 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/30 19:56:48 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

/*void leaks(void)
{
	system("leaks -q push_swap");
}*/

int	main(int argc, char **argv)
{
	int	num;

	//atexit(leaks);
	if (argc > 1)
	{
		num = ft_check_errors(argv, argc);
		if (num > 0)
		{
			num = start_sorting(argc, argv, num);
			return (0);
		}
		else if (num == -1)
			write(1, "Error\n", 6);
	}
	return (0);
}
