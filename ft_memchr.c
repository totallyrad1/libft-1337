/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:50:02 by asnaji            #+#    #+#             */
/*   Updated: 2023/11/03 10:49:29 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ts;
	size_t			i;

	i = 0;
	ts = (unsigned char *)s;
	while (i < n)
	{
		if (ts[i] == (unsigned char)c)
			return ((ts + i));
		i++;
	}
	return (NULL);
}
