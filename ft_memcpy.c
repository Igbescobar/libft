/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:42:51 by igbescobar        #+#    #+#             */
/*   Updated: 2024/03/20 10:31:26 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*d;
	const char		*s;

	i = 0;
	d = (char *)dest;
	s = (const char *)src;
	while (i < n && (dest || src))
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	arr[10];
	char	*arr2;

	arr2 = "hello there";
	ft_memcpy(((void *)0), ((void *)0), 3);
	printf("%s\n", arr);
	// memcpy((NULL), (NULL), 3);
	// printf("%s\n", arr);
	return (0);
}*/
