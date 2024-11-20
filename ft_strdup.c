/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-had <abel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 05:39:39 by abel-had          #+#    #+#             */
/*   Updated: 2024/11/14 10:54:31 by abel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	l;
	char	*p;

	l = 0;
	l = ft_strlen(s1);
	p = (char *)malloc(l + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
