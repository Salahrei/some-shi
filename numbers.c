/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:15:02 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/12 14:03:28 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	int signe;
	int result;
	int i;
	signe = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * signe);
}

void	Error(void)
{
    write(1, "Error\n", 6);
	exit(1);
}

int ft_number(char *s)
{
    int i;
    i = 0;
	if(!s[i])
		return (0);
    while (s[i])
    {
        if (!(s[i] >= '0' &&  s[i] <= '9' )|| (s[i] == ' ' || s[i] == '"'))
		{
			return (0);
		}
		i++;
    }
	return (1);
}

int	check_duplicates(int *arr, int size)
{
	int	i;
	int	j;
	i = 0;
	while (size > i)
	{
		j = i + 1;
		while (size > j)
		{
			if (arr[i] == arr[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

