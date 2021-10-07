/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:39:01 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/07 20:03:00 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_check_errors(char **argv, int argc)
{
	int		i;
	char	**str;

	i = 0;
	while (i < argc)
	{
		if (argv[i][0] == '.')
			str = ft_split(argv[i], ' ');
		printf("----> %s\n", str[1]);
		i++;
	}
	return (argc);
}
