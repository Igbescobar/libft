/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:42:51 by igbescobar        #+#    #+#             */
/*   Updated: 2024/03/18 10:57:34 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *)dest;
	s = (const char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char arr[10];
	char *arr2 = "hello there";
	// ft_memcpy(arr, arr2, 5);
	// printf("%s\n", arr);
	memcpy(arr, arr2, 5);
	printf("%s\n", arr);
	return (0);
}*/