/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:49:21 by hde-andr          #+#    #+#             */
/*   Updated: 2026/01/06 16:39:41 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (-1);
	check_input(argc, argv);
	stack_b = NULL;
	stack_a = init_list(argc, argv);
	if (sorted(&stack_a))
	{
		free_stack(&stack_a);
		free_stack(&stack_b);
		return (0);
	}
	set_index(stack_a, list_size(stack_a));
	sort(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
