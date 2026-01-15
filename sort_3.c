/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 21:49:00 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/13 21:11:20 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **Node)
{
	t_list *current;
	t_list *max;
	t_list *temp;
	current = *Node;
	temp = *Node;
	max = current;
	while (current -> next)
	{		if (current -> next -> content > max -> content)
			max = current -> next;
		current = current -> next;
	}
	if(max -> content == temp -> content)
		rotate_a(Node);
	else if(temp -> next -> content == max -> content)
		reverse_a(Node);
	temp = *Node;
	if (temp -> content > temp -> next -> content)
		Swap_a(Node);
}
