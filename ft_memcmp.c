/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:26:06 by igngonza          #+#    #+#             */
/*   Updated: 2024/03/18 10:56:46 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long	i;
	const char		*first;
	const char		*second;

	i = 0;
	first = (char *)s1;
	second = (char *)s2;
	while (first[i] && second[i] && i < n)
	{
		if (first[i] != second[i])
			return (first[i] - second[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char *arr = "hello 9there";
	char *arr2 = "hello 943";

	printf("%d\n", ft_memcmp(arr, arr2, 1));
	printf("%d\n", memcmp(arr, arr2, 1));
	return (0);
}*/