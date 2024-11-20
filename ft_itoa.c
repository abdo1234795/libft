/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-had <abel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 05:38:42 by abel-had          #+#    #+#             */
/*   Updated: 2024/11/06 02:59:03 by abel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_len(int i)
{
	int	l;

	l = 0;
	if (i <= 0)
		l++;
	while (i)
	{
		i /= 10;
		l++;
	}
	return (l);
}

static void	ft_sss(char *bib, int *len, long long int *nb)
{
	bib[*len] = '\0';
	if (*nb < 0)
	{
		bib[0] = '-';
		*nb = -(*nb);
	}
	if (*nb == 0)
		bib[0] = '0';
	while (*nb)
	{
		bib[--(*len)] = (*nb % 10) + '0';
		*nb /= 10;
	}
}

char	*ft_itoa(int n)
{
	int				len;
	char			*bib;
	long long int	nb;

	nb = n;
	len = ft_count_len(n);
	bib = (char *)malloc(len + 1);
	if (!(bib))
		return (NULL);
	ft_sss (bib, &len, &nb);
	return (bib);
}
