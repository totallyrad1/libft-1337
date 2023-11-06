/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:04:03 by asnaji            #+#    #+#             */
/*   Updated: 2023/11/05 20:02:54 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intresult(const char *str, int i, int sign)
{
	unsigned long long	nb;
	int					digitcount;

	nb = 0;
	digitcount = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		digitcount++;
		if (digitcount == 20)
		{
			if (sign == -1)
				return (0);
			else
				return (-1);
		}
		nb = nb * 10 + str[i++] - '0';
	}
	if (nb > LONG_MAX)
	{
		if (sign == -1)
			return (0);
		else
			return (-1);
	}
	return ((int)nb * sign);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	result = intresult(str, i, sign);
	return (result);
}
