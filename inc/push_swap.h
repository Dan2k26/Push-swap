/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:38:50 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/31 05:51:22 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# define MAX_INT 2147483647
# define MIN_INT -2147483648

# include <stdio.h>
# include <unistd.h>
# include <libft.h>

//files .c

int			ft_check_errors(char **argv, int argc);
long		atoi_update(const char *str);
int			start_sorting(int argc, char **argv, int num);
void		types_of_sorting(t_list *stack_a, int num);
//utils
int			duplicate_numbers(int num, int *nbrs);
char		*union_argv(char **argv, int argc);
int			ft_binary(int content, int bit);
int			is_sorted(t_list **stack, int num);
void		ft_check_binary(int num, int *pos, t_list **sa, t_list **sb);
//rules
void		ft_swap(t_list **stack, int num, int type);
void		ft_swap_all(t_list **stack_a, t_list **stack_b, int num);
void		ft_push(t_list **stack1, t_list **stack2, int num, int type);
void		ft_rotate_up(t_list **stack, int num, int type);
void		ft_rotate_all(t_list **stack_a, t_list **stack_b, int num);
void		ft_rrotate_down(t_list **stack, int num, int type);
void		ft_rrotate_all(t_list **stack_a, t_list **stack_b, int num);

#endif
