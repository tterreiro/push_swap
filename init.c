/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:46:54 by hde-andr          #+#    #+#             */
/*   Updated: 2026/01/06 15:54:40 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_index(t_stack *head, int nb_of_elements)
{
	t_stack	*biggest;
	t_stack	*tmp;

	while (nb_of_elements > 0)
	{
		nb_of_elements--;
		biggest = NULL;
		tmp = head;
		while (tmp)
		{
			if (!tmp->index && (biggest == NULL || tmp->value > biggest->value))
				biggest = tmp;
			tmp = tmp->next;
		}
		if (biggest)
			biggest->index = nb_of_elements;
	}
}

t_stack	*init_list(int argc, char **argv)
{
	t_stack	*stack_a;
	int		i;
	char	**tmp;

	stack_a = NULL;
	i = 0;
	if (argc == 2)
		tmp = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		tmp = argv;
	}
	while (tmp[i])
	{
		add_tail(&stack_a, ft_atoi(tmp[i]));
		i++;
	}
	if (argc == 2)
		free(tmp);
	return (stack_a);
}
