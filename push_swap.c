/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 11:14:21 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/15 10:06:21 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	if(argc < 2)
		return (0);
	t_list *Stack_a;
	t_list *Stack_b;

	Stack_a = NULL;
	Stack_b = NULL;
	if(!parse(argc, argv, &Stack_a))
		Error();
	t_list *current;
	current = Stack_a;
	while (current)
	{
		printf("%d ", current -> content);
		current = current -> next;
	}
	printf("\n");
	im_chunking(&Stack_a, &Stack_b);
	current = Stack_a;
	while (current)
	{
		printf("%d ", current -> content);
		current = current -> next;
	}
}