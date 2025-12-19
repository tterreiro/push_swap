/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 02:21:19 by hde-andr          #+#    #+#             */
/*   Updated: 2025/12/19 03:00:20 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_main(t_stack	**head)
{
	t_stack	*tmp;

	if (!*head || (*head)->next == NULL)
		return ;
	tmp = (*head)->next;
	(*head)->next = tmp->next;
	tmp->next = *head;
	*head = tmp;
}

void	swap_a(t_stack	**head)
{
	swap_main(head);
	write(1, "sa\n", 3);
}

void	swap_b(t_stack	**head)
{
	swap_main(head);
	write(1, "sb\n", 3);
}

void	swap_ab(t_stack	**stack_a, t_stack	**stack_b)
{
	swap_main(stack_a);
	swap_main(stack_b);
	write(1, "ss\n", 3);
}