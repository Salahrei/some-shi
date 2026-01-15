/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:51:07 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/13 21:11:35 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5(t_list **Node1, t_list **Node2)
{
	t_list *current;
	t_list *min;
	current = *Node1;
	min = *Node1;
	while (current -> next)
	{
		if (current -> next -> content < min -> content)
			min = current ->next;
		current = current -> next;
	}
	current = *Node1;
	while (current -> content != min -> content)
	{
		current = current -> next;
		rotate_a(Node1);
	}
	Push_B(Node1, Node2);
	sort_4(Node1, Node2);
	Push_A(Node1, Node2);
}
