/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_A.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 21:05:41 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/14 20:03:02 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    Push_A(t_list **Node1, t_list **Node2)
{
    int size;
    size = ft_lstsize(*Node2);
    if (size == 0)
        return;
    t_list *current;
    current = *Node2;
    *Node2 = current -> next;
    current -> next = *Node1;
    *Node1 = current;
    write(1, "pa\n", 3);
}
