/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 13:35:16 by hde-andr          #+#    #+#             */
/*   Updated: 2026/01/06 16:29:14 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_main(t_stack **stack_from, t_stack **stack_to)
{
	t_stack	*tmp;

	if (stack_from == NULL || *stack_from == NULL)
		return ;
	tmp = *stack_from;
	*stack_from = (*stack_from)->next;
	if (stack_to == NULL)
		*stack_to = tmp;
	else
	{
		tmp->next = *stack_to;
		*stack_to = tmp;
	}
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push_main(stack_b, stack_a);
	ft_putstr("pa\n");
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	push_main(stack_a, stack_b);
	ft_putstr("pb\n");
}
