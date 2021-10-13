/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:38:50 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/13 20:21:26 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# define MAX_INT 2147483647
# define MIN_INT -2147483648

# include<stdio.h>
# include<unistd.h>
# include"libft/libft.h"

int		ft_check_errors(char **argv, int argc);
long	atoi_update(const char *str);
int		start_shorting(int argc, char **argv, int num);

int		duplicate_numbers(int num, int *nbrs);
char	*union_argv(char **argv, int argc);

void	show_stack(int *nbr, int num);
#endif
