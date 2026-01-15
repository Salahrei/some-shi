/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 18:18:39 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/14 20:03:18 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_a(t_list **Node)
{
	if (!Node || !*Node || !(*Node) -> next)
		return;
	t_list *current;
	t_list *temp;
	t_list *New;

	temp = *Node;
	current = *Node;
	New = *Node;
	while (New -> next)
		New = New -> next;
	while (current -> next -> next)
		current = current -> next;
	current -> next = NULL;
	*Node = New;
	New -> next = temp;
	write(1, "rra\n", 4);
}


void	reverse_b(t_list **Node)
{
	if (!Node || !*Node || !(*Node) -> next)
		return;
	t_list *current;
	t_list *temp;
	t_list *New;

	temp = *Node;
	current = *Node;
	New = *Node;
	while (New -> next)
		New = New -> next;
	while (current -> next -> next)
		current = current -> next;
	current -> next = NULL;
	*Node = New;
	New -> next = temp;
	write(1, "rrb\n", 4);
}
