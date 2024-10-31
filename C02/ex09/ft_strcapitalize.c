/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:44:22 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/09/02 16:39:06 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap_next;

	i = 0;
	cap_next = 1;
	while (str[i] != '\0')
	{
		if (cap_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			cap_next = 0;
		}
		else if (!cap_next && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] < 'A' || str[i] > 'Z') && 
			(str[i] < 'a' || str[i] > 'z') && 
			(str[i] < '0' || str[i] > '9'))
			cap_next = 1;
		else
			cap_next = 0;
		i++;
	}
	return (str);
}
