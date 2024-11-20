/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-had <abel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 05:38:11 by abel-had          #+#    #+#             */
/*   Updated: 2024/11/17 13:34:41 by abel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}

static void	ft_vari(int *i, int *sign, size_t *result, size_t *old_result)
{
	*i = 0;
	*sign = 1;
	*result = 0;
	*old_result = 0;
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	size_t	result;
	size_t	old_result;

	ft_vari(&i, &sign, &result, &old_result);
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if (old_result > result && sign > 0)
			return (-1);
		if (old_result > result && sign < 0)
			return (0);
		i++;
		old_result = result;
	}
	return (((int)result) * sign);
}
