/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:38:50 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/11 19:11:29 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# define MAX_INT 2147483647
# define MIN_INT -2147483648

# include<stdio.h>
# include<unistd.h>
# include"libft/libft.h"

typedef struct s_numbers
{
	int			num;
	t_numbers	next;
}	t_numbers;

int		ft_check_errors(char **argv, int argc);
long	atoi_update(const char *str);
int		start_shorting(int argc, char **argv, int num);

int		duplicate_numbers(int num, int *nbrs);
char	*union_argv(char **argv, int argc);
#endif
