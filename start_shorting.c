/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_shorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:17:32 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/16 02:52:06 by dlerma-c         ###   ########.fr       */
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

static int	*create_stack_b(int num)
{
	int	*nb;
	int	i;

	nb = ft_calloc(num + 1, sizeof(int));
	if (nb == NULL)
		return (NULL);
	i = 0;
	while (i < num)
	{
		nb[i] = -1;
		i++;
	}
	return (nb);
}

int	start_shorting(int argc, char **argv, int num)
{
	int		*nbrs;
	int		*nb;
	int		*na;
	int		i;

	i = 0;
	nbrs = create_numbers(argc, argv, num);
	show_stack_A(nbrs, num, "NUMEROS USUARIO");
	na = ft_calloc(sizeof(int), num + 1);
	if (na == NULL)
		return (0);
	na = positive_numbers(nbrs, na, num);
	show_stack_A(na, num, "NUMEROS MAPEADOS");
	nb = create_stack_b(num);
	show_stack_B(nb, num, "NUMEROS STACK B");
	types_of_shorting(&na, &nb, num);
	free(na);
	free(nb);
	free (nbrs);
	return (0);
}
