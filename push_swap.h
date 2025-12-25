/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 02:09:16 by hde-andr          #+#    #+#             */
/*   Updated: 2025/12/25 13:02:56 by hde-andr         ###   ########.fr       */
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


// moves
void	swap_main(t_stack	**head);
void	swap_a(t_stack	**head);
void	swap_b(t_stack	**head);
void	swap_ab(t_stack	**stack_a, t_stack	**stack_b);
void	push_main(t_stack **stack_from, t_stack **stack_to);

// input check
void	check_input(int argc, char **argv);

// misc
void	error_msg(void);
int		count_arg(char **array);


#endif