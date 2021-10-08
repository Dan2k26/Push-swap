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

static int	check_numbers(char *str)
{
	int		y;
	char	**split;

	y = 0;
	split = ft_split(str, ' ');
	while (str[y])
	{
		if (ft_atoi(str[y]) == 0)
		{
			//return (0);
			printf("--------------%d\n", ft_atoi(str[y]));
		}
		y++;
	}
	return (1);
}

static void	*union_argv(char *argv, char **str)
{
	char	*aux;

	aux = *str;
	*str = ft_strjoin(aux, " ");
	free(aux);
	aux = *str;
	*str = ft_strjoin(aux, argv);
	printf("----> %s\n", *str);
	free(aux);
	return (0);
}

int	ft_check_errors(char **argv, int argc)
{
	int		i;
	char	*str;
	str = ft_strdup(argv[1]);
//empiezo 2 por el ./push_swap  y porque el primero ya lo hemos asignado
	i = 2;
	while (i < argc)
	{
		union_argv(argv[i], &str);
		if (check_numbers(argv[i]) == 0)
			printf("lol\n");
		i++;
	}
	free(str);
	return (argc);
}
