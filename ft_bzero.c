/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:09:47 by igngonza          #+#    #+#             */
/*   Updated: 2024/03/13 15:25:24 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0x00;
		i++;
	}
}
int	main(void)
{
	char	arr[10];

	ft_bzero(arr, 5);
	printf("%s %d", arr, 5);
	// bzero(arr, 5);
	// printf("%s &d", arr, 5);
	return (0);
}
