/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:46:42 by igngonza          #+#    #+#             */
/*   Updated: 2024/03/19 13:02:54 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*source1;
	const unsigned char	*source2;

	i = 0;
	source1 = (unsigned char *)s1;
	source2 = (unsigned char *)s2;
	while ((source1[i] || source2[i]) && i < n)
	{
		if (source1[i] != source2[i])
			return ((source1[i] - source2[i]));
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;
	size_t	size;

	s1 = "atoms\0\0\0\0";
	s2 = "atoms\0abc";
	size = 8;
	printf("%d\n", (strncmp(s1, s2, size)));
	printf("%d\n", (ft_strncmp(s1, s2, size)));
}*/
