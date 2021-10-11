/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_shorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:17:32 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/11 17:57:59 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
//num numero de numeros que hay

static int	*create_numbers(int argc, char **argv, int num)
{
	char	*str;
	char	**split;
	int		*nbrs;
	int i;

	str = union_argv(argv, argc);
	split = ft_split(str, ' ');
	nbrs = ft_calloc(num, sizeof(int));
	if (nbrs == NULL)
		return (0);
	i = 0;
	while (i < num)
	{
		nbrs[i] = ft_atoi(split[i]);
		printf("->NBRS(%d) %d\n", i, nbrs[i]);
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
	free (nbrs);	
	return (0);
}
