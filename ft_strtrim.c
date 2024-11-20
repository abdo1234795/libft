/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-had <abel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 05:40:22 by abel-had          #+#    #+#             */
/*   Updated: 2024/11/19 14:54:45 by abel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_caracter_in_str(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static void	get_index(char const *s1, char const *set,
	size_t *index1, size_t *index2)
{
	size_t	i;

	i = 0;
	while (check_caracter_in_str(s1[i], set) && s1[i])
		i++;
	*index1 = i;
	if (s1[i] == '\0')
	{
		*index2 = *index1;
		return ;
	}
	i = ft_strlen(s1) - 1;
	while (i > *index1 && check_caracter_in_str(s1[i], set))
		i--;
	*index2 = i;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	index1;
	size_t	index2;
	size_t	i;
	char	*bib;

	if (!s1 || !set)
		return (NULL);
	get_index(s1, set, &index1, &index2);
	if (index1 >= index2)
		return (ft_strdup(""));
	bib = (char *)malloc(index2 - index1 + 2);
	if (bib == NULL)
		return (NULL);
	i = 0;
	while (index1 <= index2)
		bib[i++] = s1[index1++];
	bib[i] = '\0';
	return (bib);
}
