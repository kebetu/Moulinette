/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 12:38:17 by agreau            #+#    #+#             */
/*   Updated: 2013/12/01 12:38:28 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
    while (n-- > '\0' || *s1 == '\0' || *s2 == '\0')
    {
        if (*s1 != *s2)
            return (0);
        s1++;
        s2++;
    }
	return (1);
}
