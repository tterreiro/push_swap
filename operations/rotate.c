/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 17:23:10 by hde-andr          #+#    #+#             */
/*   Updated: 2026/01/02 13:24:10 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_main(t_stack **head)
{
	t_stack	*tail;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = *head;
	*head = (*head)->next;
	tail->next->next = NULL;
}

void	ra(t_stack	**a)
{
	rotate_main(a);
	ft_putstr("ra\n");
}

void	rb(t_stack	**b)
{
	rotate_main(b);
	ft_putstr("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rotate_main(a);
	rotate_main(b);
	ft_putstr("rr\n");
}
