/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_util.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 12:00:51 by hde-andr          #+#    #+#             */
/*   Updated: 2026/01/06 13:57:59 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_size(t_stack *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_stack	*make_node(int new_value)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = new_value;
	new_node->index = 0;
	new_node->next = NULL;
	return (new_node);
}

void	add_tail(t_stack **head, int new_value)
{
	t_stack	*new_node;
	t_stack	*current;

	if (*head == NULL)
	{
		*head = make_node(new_value);
		return ;
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	new_node = make_node(new_value);
	current->next = new_node;
}

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
