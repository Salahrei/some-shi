/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunkin3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:46:25 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/13 19:52:35 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*found_max(t_list **Node1)
{
	t_list *current;
	t_list *max;
	current = *Node1;
	max =current;
	while (current)
	{
		if (current -> index > max -> index)
			max = current;
		current = current -> next;
	}
	return max;
}

void	chunking_back(t_list **Node1, t_list **Node2)
{
	t_list *current;
	t_list *max;
	t_list *temp;
	int size;
	int count;

	while (*Node2)
	{
		max = found_max(Node2);
		current = *Node2;
		size = ft_lstsize(*Node2);
		count = 0;
		while (current && current != max)
		{
			count++;
			current = current -> next;
		}
		if(size / 2 >= count)
		{
			while ((*Node2) -> index != max -> index)
				rotate(Node2);
		}
		else
		{
			while ((*Node2) -> index != max -> index)
				reverse(Node2);
		}
		Push_A(Node1, Node2);
	}
}

void	chunk(t_list **Node1, t_list **Node2)
{
	int	i;
	int start;
	int end;
	int chunk_size;
	int len;
	t_list *current;
	t_list *temp;

	i = 0;
	start = 0;
	current = *Node1;
	chunk_size = 3;
	indexing(Node1);
	len = ft_lstsize(*Node1);
	while ((len / 2 ) + 1 > i)
	{
		end = start + chunk_size - 1;
		current = *Node1;
		while (current)
		{
			if (current -> index <= end)
				Push_B(Node1, Node2);
			else
				rotate(Node1);
			current = current -> next;
		}
		start += 2;
		i++;
	}
	chunking_back(Node1, Node2);
}

// int main(void)
// {	
// 	t_list *Stack_a;
// 	t_list *Stack_b;
// 	Stack_a = NULL;
// 	Stack_b = NULL;
// 	push_front(&Stack_a, 8);
// 	push_front(&Stack_a, 3);
// 	push_front(&Stack_a, 1);
// 	push_front(&Stack_a, 6);
// 	push_front(&Stack_a, 2);
// 	push_front(&Stack_a, 5);
// 	push_front(&Stack_a, 4);
// 	push_front(&Stack_a, 7);
// 	t_list *current;
// 	current = Stack_a;
// 	while (current)
// 	{
// 		printf("%d ", current -> content);
// 		current = current -> next;
// 	}
// 	chunking(&Stack_a, &Stack_b);
// 	current = Stack_a;
// 	while (current)
// 	{
// 		printf("%d ", current -> content);
// 		current = current -> next;
// 	}
// }
