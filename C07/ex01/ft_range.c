/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:20:23 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/09/15 16:21:15 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	j;

	j = 0;
	if (min >= max)
		return (0);
	array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		array[j] = min;
		min++;
		j++;
	}
	return (array);
}
// int main() {
//     int maximum = 16;
//     int minimum = -3;

//     int *arr = ft_range(minimum, maximum);
//         printf("%d\n",arr[i]);

//     return (0);
// }
