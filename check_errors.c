/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:39:01 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/11 00:33:26 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	duplicate_numbers(int num, int *nbrs)
{
	int	i;
	int	y;

	i = 0;
	while (i < num)
	{
		y = 0;
		while (y < num)
		{
			if (y != i && nbrs[i] == nbrs[y])
			{
				printf("%d\n", nbrs[i]);
				printf("SON IGUALES %d    %d\n", nbrs[i], nbrs[y]);
				return (-1);
			}
			y++;
		}
		i++;
	}
	return (0);
}

static int	check_numbers(char **split)
{
	int	i;
	int	y;
	int	*nbrs;

	i = 0;
	while (split[i] != NULL)
	{
		if (atoi_update(split[i]) > MAX_INT || atoi_update(split[i]) < MIN_INT)
			return (-1);
		i++;
	}
	if (i == 1)
		return (0);
	nbrs = ft_calloc(i, sizeof(int));
	if (nbrs == NULL)
		return (0);
	y = 0;
	while (y < i)
	{
		nbrs[y] = ft_atoi(split[y]);
		y++;
	}
	if (duplicate_numbers(i, nbrs) == -1)
		return (-1);
	return (i);
}

char	*union_argv(char **argv, int argc)
{
	char	*aux;
	int		i;
	char	*str;

	str = ft_strdup(argv[1]);
	i = 2;
	while (i < argc)
	{
		aux = str;
		str = ft_strjoin(aux, " ");
		free(aux);
		aux = str;
		str = ft_strjoin(aux, argv[i]);
		free(aux);
		i++;
	}
	return (str);
}

int	ft_check_errors(char **argv, int argc)
{
	char	*str;
	int		nbr;
	char	**split;

	str = union_argv(argv, argc);
	split = ft_split(str, ' ');
	nbr = check_numbers(split);
	ft_free_malloc(split);
	free(str);
	if (nbr == 0)
		return (0);
	else if (nbr == -1)
		return (-1);
	return (nbr);
}
