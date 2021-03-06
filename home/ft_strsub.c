/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelefebv <jelefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 11:57:18 by jelefebv          #+#    #+#             */
/*   Updated: 2014/11/13 14:43:18 by jelefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	index;

	dest = (char *)malloc(sizeof(char) * len + 1);
	index = 0;
	if (dest == NULL)
		return (NULL);
	while (index < len)
	{
		dest[index] = s[start + index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
