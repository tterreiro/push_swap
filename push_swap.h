/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 02:09:16 by hde-andr          #+#    #+#             */
/*   Updated: 2026/01/06 15:30:16 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;
// initialisation
t_stack	*init_list(int argc, char **argv);
void	set_index(t_stack *head, int nb_of_elements);

//sort
void	sort(t_stack **stack_a, t_stack **stack_b);
void	radix_sort(t_stack **stack_a, t_stack **stack_b);
void	sort_five(t_stack **stack_a, t_stack **stack_b);
void	sort_three(t_stack	**head);

// moves
void	swap_main(t_stack	**head);
void	sa(t_stack	**head);
void	sb(t_stack	**head);
void	ss(t_stack	**stack_a, t_stack	**stack_b);
void	push_main(t_stack **stack_from, t_stack **stack_to);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	rotate_main(t_stack **head);
void	ra(t_stack	**a);
void	rb(t_stack	**b);
void	rr(t_stack	**a, t_stack	**b);
void	r_rotate_main(t_stack **head);
void	rra(t_stack	**a);
void	rrb(t_stack	**b);
void	rrr(t_stack	**a, t_stack **b);

// input check
void	check_input(int argc, char **argv);
int		check_doubles(char **argv);
int		check_int(char *argv);

// util
void	error_msg(void);
int		count_arg(char **array);
void	add_tail(t_stack **head, int new_value);
t_stack	*make_node(int new_value);
int		list_size(t_stack *lst);
void	print_list(t_stack *head);
void	free_stack(t_stack **head);
int		find_biggest(t_stack *head);
int		find_bits(int biggest_nbr);
int		sorted(t_stack **head);

#endif