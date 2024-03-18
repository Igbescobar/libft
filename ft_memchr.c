/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:36:08 by igngonza          #+#    #+#             */
/*   Updated: 2024/03/18 12:06:40 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*source;

	source = (unsigned char *)s;
	i = 0;
	while (source[i] && i < n)
	{
		if (source[i] == c)
			return (&source[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*arr;

	arr = "hello there";
	printf("%s\n", ft_memchr(arr, 'o', 7));
	printf("%s", memchr(arr, 'o', 7));
	return (0);
}*/
