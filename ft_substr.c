/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:37:53 by igngonza          #+#    #+#             */
/*   Updated: 2024/03/22 11:21:08 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	void	*result;

	result = (void *)malloc((len + 1) * sizeof(char));
	if (result != NULL)
	{
		ft_memcpy(result, &s[start], len);
		((char *)result)[len] = '\0';
	}
	return ((char *)result);
}

/*int	main(void)
{
	char *arr = "hello there";
	printf("%s\n", ft_substr(arr, 6, 2));
	return (0);
}*/