/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:39:01 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/08 18:47:43 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	check_numbers(char *str)
{
	int		i;
	char	**split;

	i = 0;
	split = ft_split(str, ' ');
	while (split[i])
		i++;
	return (i);
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

static void	back_free(char **str)
{
	int	i;

	i = 0;
	while (*str)
	{
		free(*str);
		str++;
	}
}

int	ft_check_errors(char **argv, int argc)
{
	int		i;
	int		nbr;
	char	**split;
	char	*str;

	str = ft_strdup(argv[1]);
	i = 2;
	while (i < argc)
	{
		union_argv(argv[i], &str);
		i++;
	}
	split = ft_split(str, ' ');
	printf("-----NUM     %zd\n", ft_strlen(*split));
	nbr = check_numbers(str);
	if (nbr == 0)
	{
		back_free(&str);
		return (0);
	}
	free(str);
	return (argc);
}
