/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   im_chunking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:50:12 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/15 10:14:42 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*im_maxing(t_list **Stack_a)
{
	t_list *current;
	t_list *max;

	current = *Stack_a;
	max = current;
	while (current)
	{
		if (current -> index > max -> index)
			max = current;
		current = current -> next;
	}
	return max;
}

void	im_chunking_back_RAAH(t_list **Stack_a, t_list **Stack_b)
{
	t_list	*current;
	t_list	*max;
	int		size;
	int		count;

	while (*Stack_b)
	{
		count = 0;
		current = *Stack_b;
		size = ft_lstsize(*Stack_b);
		max = im_maxing(Stack_b);
		while (current && current  != max)
		{
			count++;
			current = current -> next;
		}
		if (size / 2 >= count)
		{
			while ((*Stack_b) -> index != max -> index)
				rotate_b(Stack_b);
		}
		else
		{
			while ((*Stack_b) -> index != max -> index)
				reverse_b(Stack_b);
		}
		Push_A(Stack_a, Stack_b);
	}
}

void	im_chunking(t_list **Stack_a, t_list **Stack_b)
{
	t_list	*current;
	int		size;
	int		chunk_size;
	int		count;

	indexing(Stack_a);
	size = ft_lstsize(*Stack_a);
	count = 0;
	if (size <= 100)
		chunk_size = 15;
	else
		chunk_size = 30;
	while (size > 0)
	{
		current = *Stack_a;
		if (current -> index <= count)
		{
			Push_B(Stack_a, Stack_b);
			count++;
		}
		else if(current -> index <= (count + chunk_size))
		{
			Push_B(Stack_a, Stack_b);
			rotate_b(Stack_b);
			count++;
		}
		else
			rotate_a(Stack_a);
		size--;
	}
	im_chunking_back_RAAH(Stack_a, Stack_b);
}

// int main(void)
// {
	
// }