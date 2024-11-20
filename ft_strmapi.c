/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-had <abel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 05:40:13 by abel-had          #+#    #+#             */
/*   Updated: 2024/11/14 10:28:21 by abel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*bib;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	bib = malloc(len + 1);
	if (!(bib))
		return (NULL);
	i = 0;
	while (i < len)
	{
		bib[i] = (*f)(i, s[i]);
		i++;
	}
	bib[i] = '\0';
	return (bib);
}
