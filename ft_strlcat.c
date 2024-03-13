/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:13:09 by igngonza          #+#    #+#             */
/*   Updated: 2024/03/13 14:26:20 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j + i < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	while (src[j] && j < size)
		j++;
	return (i + j);
}

/*int	main(void)
{
	char	arr[100] = "hello";
	char	arr1[] = "there";

	printf("%lu\n", strlcat(arr, arr1, 3));
	printf("%s\n", arr);
	// printf("%u\n", ft_strlcat(arr, arr1, 3));
	// printf("%s\n", arr);
	return (0);
}*/
