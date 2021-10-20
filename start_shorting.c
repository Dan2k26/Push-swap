/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_shorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:17:32 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/20 19:20:24 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	*positive_numbers(int *nbr, int *n, int num)
{
	int	i;
	int	y;
	int	cont;

	i = 0;
	while (i < num)
	{
		cont = 1;
		y = 0;
		while (y < num)
		{
			if (nbr[i] > nbr[y])
				cont++;
			y++;
		}
		n[i] = cont;
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
	int			*nbrs;
	int			*na;
	t_list	*stack_a;
	int			i;

	i = 0;
	nbrs = create_numbers(argc, argv, num);
	show_stack_A(nbrs, num, "NUMEROS USUARIO");
	na = ft_calloc(sizeof(int), num + 1);
	if (na == NULL)
		return (0);
	na = positive_numbers(nbrs, na, num);
	show_stack_A(na, num, "NUMEROS MAPEADOS");
	stack_a = make_lists(na, num);
	types_of_shorting(&stack_a, num);
	free(na);
	free (nbrs);
	return (0);
}
