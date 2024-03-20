/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:05:34 by igngonza          #+#    #+#             */
/*   Updated: 2024/03/20 16:24:32 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	void	*result;

	len = ft_strlen(s1) + 1;
	result = (char *)malloc(len);
	if (result == 0)
		return (0);
	ft_memcpy(result, s1, len);
	return (result);
}

/*int	main(void)
{
	char	*str;
	char	*tmp;

	tmp = "";
	str = ft_strdup(tmp);
	printf("%s\n", str);
}*/
