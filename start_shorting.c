/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_shorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:17:32 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/13 17:56:31 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	*positive_numbers(int *nbr, int num)
{
	int	i;
	int	min;
	int	*n;

	i = 0;
	min = 0;
	n = ft_calloc(sizeof(int), num + 1);
	if (n == NULL)
		return (NULL);
	while (i < num)
	{
		if (nbr[min] > nbr[i])
		{
			//n[i] = 1;
			min = i;
			//printf("%d\n", min);
		}
		//printf("-------> N(%d) %d\n", i, n[i]);
		i++;
	}
	n[min] = 1;
	while (i > 0)
	{
		i--;
		printf("-------> N(%d) %d\n", i, n[i]);
	}
	printf("-------> MIN(%d): %d\n", min, nbr[min]);
	return (0);
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

	nbrs = create_numbers(argc, argv, num);
	show_stack(nbrs, num);
	positive_numbers(nbrs, num);
	free (nbrs);
	return (0);
}
