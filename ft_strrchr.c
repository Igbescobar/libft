/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:29:08 by igngonza          #+#    #+#             */
/*   Updated: 2024/03/19 15:25:23 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*source;

	source = NULL;
	while (*s)
	{
		if (*s == (char)c)
			source = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)source);
}
/*int	main(void)
{
	char	*src;
	char	*d1;
	char	*d2;

	src = "\0";
	printf("%s\n", ft_strrchr(src, '\0'));
	printf("%s\n", strrchr(src, '\0'));
}*/
