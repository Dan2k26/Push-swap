/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:17:32 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/31 05:29:35 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static t_list	*make_lists(int *nbr, int len)
{
	t_list	*list;
	t_list	*node;
	int		i;

	list = NULL;
	node = ft_lstnew(nbr[len - 1]);
	list = node;
	i = len - 2;
	while (i >= 0)
	{
		node = ft_lstnew(nbr[i]);
		ft_lstadd_front(&list, node);
		i--;
	}
	return (list);
}

static void	positive_numbers(int *nbr, int *n, int num)
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

int	start_sorting(int argc, char **argv, int num)
{
	int			*nbrs;
	int			*na;
	t_list		*stack_a;

	nbrs = create_numbers(argc, argv, num);
	na = ft_calloc(sizeof(int), num + 1);
	if (na == NULL)
		return (0);
	positive_numbers(nbrs, na, num);
	stack_a = make_lists(na, num);
	types_of_sorting(stack_a, num);
	free(na);
	free (nbrs);
	return (0);
}
