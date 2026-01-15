/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 15:15:49 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/01 15:16:26 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *Node)
{
	t_list *current;
	int i;
	i = 0;
	current = Node;
	while (current)
	{
		i++;
		current = current -> next;
	}
	return i;
}
