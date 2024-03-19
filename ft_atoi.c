/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:07:22 by igngonza          #+#    #+#             */
/*   Updated: 2024/03/19 16:07:36 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;
	int	counter;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == '\f')
		i++;
	while ((str[i] == '-' || str[i] == '+') && (counter < 1))
	{
		if (str[i] == '-')
			sign *= -1;
		counter = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

/*int	main(void)
{
	int	i;
	int	j;

	i = ft_atoi("-123THERE IS A NYANCAT UNDER YOUR BED");
	j = atoi("-123THERE IS A NYANCAT UNDER YOUR BED");
	printf("%d\n%d\n", i, j);
	return (0);
}*/
