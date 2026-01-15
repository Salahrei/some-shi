/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_front.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 10:15:02 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/12 10:17:17 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*push_front(t_list **Node, int content)
{
	t_list *New;
	New = malloc(sizeof(*Node));
	if(!New)
		return (NULL);
	New -> content = content;
	New -> next = *Node;
	*Node = New;
	return New;
}
