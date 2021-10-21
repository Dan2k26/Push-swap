/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:38:50 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/21 19:47:58 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# define MAX_INT 2147483647
# define MIN_INT -2147483648

# include<stdio.h>
# include<unistd.h>
# include"libft/libft.h"

//files .c
int			ft_check_errors(char **argv, int argc);
long		atoi_update(const char *str);
int			start_shorting(int argc, char **argv, int num);
void	    types_of_shorting(t_list **stack_a, int num);
//utils
int			duplicate_numbers(int num, int *nbrs);
char		*union_argv(char **argv, int argc);
//rules
t_list		*ft_rrotate_down(t_list **stack, int num);
//show slack
void		show_stack_A(int *nbra, int num, char *msg);
void		show_stack_B(int *nbrb, int num, char *msg);
void		show_list(t_list *lst, int num, char *msg);
void		show_stack_list_data(t_list	*lst, int num, char *msg);
//Make lists
t_list		*make_lists(int *nbr, int len);

#endif
