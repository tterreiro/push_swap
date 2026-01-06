/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 12:27:34 by hde-andr          #+#    #+#             */
/*   Updated: 2026/01/06 16:39:56 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack *head)
{
	t_stack	*current;

	current = head;
	while (current != NULL)
	{
		printf("%d ", current->value);
		current = current->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (0);
	check_input(argc, argv);
	stack_b = NULL;
	stack_a = init_list(argc, argv);
	set_index(stack_a, list_size(stack_a));
	sort(&stack_a, &stack_b);
	print_list(stack_a);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
