/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:07:24 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/13 18:53:07 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushing(t_list **Node, int *arr, int i)
{
	while (i > 0)
	{
		i--;
		push_front(Node, arr[i]);
	}
}

int	parse(int argc , char *argv[], t_list **Node)
{
	int 	i;
	int		*arr;
	char	**result;
	long	n;

	result = ft_split(argv);
	i = 0;
	arr = malloc(sizeof(int) * (argc - 1));
	while (result[i])
	{
		if(!ft_number(result[i]))
			return (0);
		n = ft_atoi(result[i]);
		if(n > INT_MAX || n < INT_MIN)
			return (0);
		arr[i] = n;
		i++;
	}
	if(!check_duplicates(arr, i))
		return (0);
	pushing(Node, arr, i);
	free(arr);
	free_func(result);
	return (1);
}
