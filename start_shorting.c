/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_shorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:17:32 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/14 19:56:46 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int *positive_numbers(int *nbr, int *n, int num)
{
	int	i;
	int	y;
	int	cont;

	i = 0;
	printf("->num %d\n", num);
	while (i < num)
	{
		cont = 0;
		y = 0;
		while (y < num)
		{
			if (nbr[i] > nbr[y])
				cont++;
			y++;
		}
		n[i] = cont;
		printf("-------> N(%d): %d\n", i, n[i]);
		i++;
	}
	return (n);
}

static int	*create_numbers(int argc, char **argv, int num)
{
	char	*str;
	char	**split;
	int		*nbrs;
	int		i;

	str = union_argv(argv, argc);
	split = ft_split(str, ' ');
	nbrs = ft_calloc(num, sizeof(int));
	if (nbrs == NULL)
		return (0);
	i = 0;
	while (i < num)
	{
		nbrs[i] = ft_atoi(split[i]);
		i++;
	}
	ft_free_malloc(split);
	free(str);
	return (nbrs);
}

int	start_shorting(int argc, char **argv, int num)
{
	int		*nbrs;
	int		*n;
	int		i;

	i = 0;
	nbrs = create_numbers(argc, argv, num);
	show_stack(nbrs, num);
	n = (int *)ft_calloc(sizeof(int), num + 1);
	if (n == NULL)
		return (0);
	n = positive_numbers(nbrs, n, num);
	while (i < num)
	{
		printf("-> N(%d) %d   %d\n", i, n[i], nbrs[i]);
		i++;
	}
	free (nbrs);
	return (0);
}
