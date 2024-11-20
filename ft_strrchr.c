/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-had <abel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 05:32:05 by abel-had          #+#    #+#             */
/*   Updated: 2024/11/02 06:07:18 by abel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			x;

	i = ft_strlen(s);
	x = (char)c;
	while (i > 0)
	{
		if (s[i] == x)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == x)
		return ((char *)&s[i]);
	return (NULL);
}
