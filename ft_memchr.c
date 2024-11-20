/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-had <abel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 05:39:12 by abel-had          #+#    #+#             */
/*   Updated: 2024/11/16 20:58:44 by abel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*str;
	size_t			i;

	a = (unsigned char )c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == a)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
