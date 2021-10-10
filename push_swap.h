/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:38:50 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/10 23:41:42 by dlerma-c         ###   ########.fr       */
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
char	*union_argv(char **argv, int argc);
int		start_shorting(int argc, char **argv, int num);

#endif
