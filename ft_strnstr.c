/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:41:15 by igngonza          #+#    #+#             */
/*   Updated: 2024/03/18 12:23:32 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	long unsigned int	i;
	long unsigned int	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	arr[] = "hellotherehola";
	char	arr1[] = "hello";

	printf("%p\n", (void *)ft_strnstr(arr, arr1, 2));
	printf("%p\n", (void *)strnstr(arr, arr1, 2));
	return (0);
}*/
