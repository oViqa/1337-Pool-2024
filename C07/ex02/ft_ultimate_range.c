/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:54:29 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/09/15 20:03:03 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	j;

	j = 0;
	if (min >= max)
		return (0);
	array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		array[j] = min;
		min++;
		j++;
	}
	*range = array;
	return (j);
}
