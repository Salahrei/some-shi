/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 15:17:18 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/14 20:03:31 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **Node)
{
	if (!Node || !*Node || !(*Node) -> next)
		return;
	t_list *temp;
	t_list *current;

	temp = *Node;
	current = *Node;
	*Node = temp -> next;
	while (current -> next)
		current = current -> next;

	current -> next = temp;
	temp -> next = NULL;
	write(1, "ra\n", 3);
}

void	rotate_b(t_list **Node)
{
	if (!Node || !*Node || !(*Node) -> next)
		return;
	t_list *temp;
	t_list *current;

	temp = *Node;
	current = *Node;
	*Node = temp -> next;
	while (current -> next)
		current = current -> next;

	current -> next = temp;
	temp -> next = NULL;
	write(1, "rb\n", 3);
}
