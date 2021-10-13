/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_shorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:17:32 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/13 20:22:09 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int *positive_numbers(int *nbr, int *n, int num)
{
	int	i;
	int	max;

	i = 0;
	i = 0;
	max = 0;
	while (i < num)
	{
		if (nbr[max] < nbr[i])
		{
			max = i;
			break;
		}		
		i++;
		printf("->%d\n", num);
	}
	n[max] = num;
	printf("-------> N(%d): %d\n", num, n[max]);
	if ( num != 0)
		return(positive_numbers(nbr, n, num - 1));
	else 
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
		printf("-> N(%d) %d\n", i, n[i]);
		i++;
	}
	free (nbrs);
	return (0);
}
