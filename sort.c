/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 13:56:44 by hde-andr          #+#    #+#             */
/*   Updated: 2026/01/06 16:35:55 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack	**head)
{
	int	biggest;

	biggest = find_biggest(*head);
	if ((*head)->index == biggest)
		ra(head);
	else if ((*head)->next->index == biggest)
		rra(head);
	if ((*head)->index > (*head)->next->index)
		sa(head);
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	if ((*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	biggest_nbr;
	int	max_bits;
	int	i;
	int	j;

	biggest_nbr = find_biggest(*stack_a);
	max_bits = find_bits(biggest_nbr);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j <= biggest_nbr)
		{
			if (((*stack_a)->index >> i) & 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		i++;
	}
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = list_size(*stack_a);
	if (!sorted(stack_a) && size <= 3)
		sort_three(stack_a);
	else if (!sorted(stack_a) && size <= 5)
		sort_five(stack_a, stack_b);
	else if (!sorted(stack_a))
		radix_sort(stack_a, stack_b);
	else
	{
		free_stack(stack_a);
		free_stack(stack_b);
	}
}
