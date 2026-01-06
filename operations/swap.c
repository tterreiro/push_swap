/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 02:21:19 by hde-andr          #+#    #+#             */
/*   Updated: 2026/01/06 13:59:36 by hde-andr         ###   ########.fr       */
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

void	sa(t_stack	**head)
{
	swap_main(head);
	write(1, "sa\n", 3);
}

void	sb(t_stack	**head)
{
	swap_main(head);
	write(1, "sb\n", 3);
}

void	ss(t_stack	**stack_a, t_stack	**stack_b)
{
	swap_main(stack_a);
	swap_main(stack_b);
	write(1, "ss\n", 3);
}
