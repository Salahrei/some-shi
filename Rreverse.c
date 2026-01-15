/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rreverse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 21:15:13 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/14 20:03:37 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    Rreverse(t_list **Node1, t_list **Node2)
{
    reverse_a(Node1);
    reverse_b(Node2);
    write(1, "rrr\n", 4);
}
