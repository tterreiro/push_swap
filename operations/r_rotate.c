/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 12:20:06 by hde-andr          #+#    #+#             */
/*   Updated: 2026/01/02 13:23:25 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_rotate_main(t_stack **head)
{
	t_stack	*prev_tail;
	t_stack	*new_tail;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	prev_tail = *head;
	while (prev_tail->next != NULL)
	{
		new_tail = prev_tail;
		prev_tail = prev_tail->next;
	}
	prev_tail->next = *head;
	new_tail->next = NULL;
	*head = prev_tail;
}

void	rra(t_stack	**a)
{
	r_rotate_main(a);
	ft_putstr("rra\n");
}

void	rrb(t_stack	**b)
{
	r_rotate_main(b);
	ft_putstr("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	r_rotate_main(a);
	r_rotate_main(b);
	ft_putstr("rrr\n");
}
