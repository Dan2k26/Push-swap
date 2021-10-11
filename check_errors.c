/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:39:01 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/11 16:07:59 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	check_numbers(char **split)
{
	int	i;
	int	y;
	int	*nbrs;

	i = -1;
	while (split[++i] != NULL)
	{
		if (atoi_update(split[i]) > MAX_INT || atoi_update(split[i]) < MIN_INT)
			return (-1);
	}
	if (i == 1)
		return (0);
	nbrs = ft_calloc(i, sizeof(int));
	if (nbrs == NULL)
		return (0);
	y = -1;
	while (++y < i)
		nbrs[y] = ft_atoi(split[y]);
	if (duplicate_numbers(i, nbrs) == -1)
	{
		free(nbrs);
		return (-1);
	}
	free(nbrs);
	return (i);
}

int	ft_check_errors(char **argv, int argc)
{
	char	*str;
	int		nbr;
	char	**split;

	str = union_argv(argv, argc);
	split = ft_split(str, ' ');
	if (split == NULL)
	{
		ft_free_malloc(split);
		free(str);
		return (0);
	}
	nbr = check_numbers(split);
	ft_free_malloc(split);
	free(str);
	if (nbr == 0)
		return (0);
	else if (nbr == -1)
		return (-1);
	return (nbr);
}
