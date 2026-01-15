/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 14:24:43 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/14 15:55:39 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef struct t_list
{
	int content;
	int	index;
	struct t_list *next;
}t_list;

t_list	*im_maxing(t_list **Stack_a);
void	im_chunking_back_RAAH(t_list **Stack_a, t_list **Stack_b);
void    im_chunking(t_list **Node1, t_list **Node2);
int		parse(int argc , char *argv[], t_list **Node);
t_list	*push_front(t_list **Node, int content);
int		check_duplicates(int *arr, int size);
int 	ft_number(char *s);
void	Error(void);
int		ft_atoi(char *str);
int		ft_lstsize(t_list *Node);
char	**ft_split(char **argv);
void	Swap_a(t_list **Node);
void	Swap_b(t_list **Node);
void	reverse_a(t_list **Node);
void	reverse_b(t_list **Node);
void	rotate_a(t_list **Node);
void	rotate_b(t_list **Node);
void	Push_A(t_list **Node1, t_list **Node2);
void	Push_B(t_list **Node1, t_list **Node2);
void    Rreverse(t_list **Node1, t_list **Node2);
void    Rrotate(t_list **Node1, t_list **Node2);
void    Sswap(t_list **Node1, t_list **Node2);
void	sort_3(t_list **Node);
void	sort_4(t_list **Node1, t_list **Node2);
void	sort_5(t_list **Node1, t_list **Node2);
void	indexing(t_list **Node);
void    free_func(char **arr);

#endif