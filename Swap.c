/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 14:26:01 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/14 20:03:59 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	Swap_a(t_list **Node)
{
	if(!Node || !*Node || !(*Node) -> next)
		return;
	t_list *New;
	t_list *temp;
	New = *Node;
	temp = New -> next;
	New -> next = temp -> next;
	*Node = temp;
	temp ->next = New;
	write(1, "sa\n", 3);
}

void	Swap_b(t_list **Node)
{
	if (!Node || !*Node || !(*Node) -> next )
		return ;
	t_list *New;
	t_list *temp;
	New = *Node;
	temp = New -> next;
	New -> next = temp -> next;
	*Node = temp;
	temp ->next = New;
	write(1, "sb\n", 3);
}
