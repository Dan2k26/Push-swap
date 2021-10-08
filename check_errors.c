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

static int	check_numbers(char *argv)
{
	int		y;
	//char	**str;

	y = 0;
	while (argv[y])
	{
		if (ft_isdigit(argv[y]) == 0)
		{
						//return (0);
		}
		y++;
	}
	return (1);
}

int	ft_check_errors(char **argv, int argc)
{
	int		i;
	char	**str;
	int		y;
//empiezo a 1 por el ./push_swap
	i = 1;
	y = 0;
	while (i < argc)
	{
		if (ft_strchr(argv[i], ' ') != NULL)
		{
			str = ft_split(argv[i], ' ');
		}
		while (str[y])
		{
			printf("%d----> %s\n", y, str[y]);
			free(str[y]);
			y++;
		}
		if (check_numbers(argv[i]) == 0)
			printf("lol\n");
		i++;
	}
	free(str);
	return (argc);
}
