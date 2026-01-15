/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_B.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 18:31:39 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/14 20:03:07 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    Push_B(t_list **Node1, t_list **Node2)
{
    int size;
    size = ft_lstsize(*Node1);
    if (size == 0)
        return;
    t_list *current;
    current = *Node1;
    *Node1 = current -> next;
    current -> next = *Node2;
    *Node2 = current;
    write(1, "pb\n", 3);
}
