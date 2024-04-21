/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:13:09 by igngonza          #+#    #+#             */
/*   Updated: 2024/04/21 10:57:55 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	result_length;

	i = 0;
	j = 0;
	if (dest == NULL && size == 0)
		return ((size_t)(ft_strlen(src)));
	while (dest[i])
		i++;
	if (size > 0)
	{
		while (src[j] && j + i < size - 1)
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
	}
	result_length = 0;
	while (src[result_length])
		result_length++;
	if (size < i)
		return (result_length + size);
	return (i + result_length);
}

/*int	main(void)
{
	char	arr1[] = "helllo there";

	// char	arr[100] = NULL;
	// printf("%lu\n", strlcat(arr1, NULL, 0));
	// printf("%s\n", arr);
	printf("%lu\n", ft_strlcat(NULL, arr1, 0));
	// printf("%s\n", arr);
	return (0);
}*/
