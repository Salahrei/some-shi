/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:51:20 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/13 18:55:27 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	count_words(char **argv)
{
	int	i;
	int	j;
	int	count;

	count  = 0;
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			while (argv[i][j] && (argv[i][j] == ' ' || argv[i][j] == '\t'))
				j++;
			if (argv[i][j] && argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				count++;
				while (argv[i][j] && argv[i][j] >= '0' && argv[i][j] <= '9')
					j++;
			}
			else if(argv[i][j])
				Error();
		}
		i++;
	}
	return count;
}

int	words_len(char *argv, int j)
{
	int count;
	count = 0;
	while (argv[j] >= '0' && argv[j] <= '9')
	{
		j++;
		count++;
	}
	return count;
}

char	**ft_split(char **argv)
{
	char	**result;
	int 	i;
	int		j;
	int		x;
	int		k;
	result = malloc((count_words(argv) + 1) * sizeof (char *));
	if (!result)
		return (NULL);
	i = 1;
	x = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			while (argv[i][j] && (argv[i][j] == ' ' || argv[i][j] == '\t'))
				j++;
			if (argv[i][j] && argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				result[x] = malloc((words_len(argv[i], j) + 1));
				if(!result[x])
					return NULL;
				k = 0;
				while (argv[i][j] && argv[i][j] >= '0' && argv[i][j] <= '9')
				{
					result[x][k++] = argv[i][j++];
				}
				result[x][k] = '\0';
				x++;
			}  
			else if(argv[i][j])
				Error();
		}
		i++;
	}
	result[x] = NULL;
	return result;
}


// int main(int argc , char *argv[])
// {
// 	char **result = ft_split(argv);
// 	int i = 0;
// 	while (result[i])
// 	{
// 		printf("%s ", result[i++]);
// 	}
// }
