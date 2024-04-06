/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igngonza <igngonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:18:58 by igngonza          #+#    #+#             */
/*   Updated: 2024/04/06 13:18:30 by igngonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <signal.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	if (!s)
		raise(SIGSEGV);
	i = 0;
	ch = c + '\0';
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *)(s + i));
		i++;
	}
	if (ch == '\0')
		return ((char *)(s + i));
	return (0);
}

/*int	main(void)
{
	printf("%s\n", ft_strchr(((void *)0), '\0'));
	printf("%s\n", strchr(((void *)0), '\0'));
}*/
