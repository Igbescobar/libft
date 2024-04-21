/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:41:15 by igngonza          #+#    #+#             */
/*   Updated: 2024/04/21 11:11:05 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *s, const char *need, size_t len)
{
	long unsigned int	i;
	long unsigned int	j;

	if (s == NULL && len == 0)
		return (NULL);
	i = 0;
	if (need[i] == '\0')
		return ((char *)s);
	while (s[i] && i < len)
	{
		j = 0;
		while (s[i + j] == need[j] && i + j < len)
		{
			j++;
			if (need[j] == '\0')
				return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	arr[] = "hellotherehola";
	char	arr1[] = "hello";

	printf("%p\n", (void *)strnstr(NULL, arr1, 0));
	printf("%p\n", (void *)ft_strnstr(NULL, arr1, 0));
	return (0);
}*/
