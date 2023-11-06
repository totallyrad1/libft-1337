/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:37:14 by asnaji            #+#    #+#             */
/*   Updated: 2023/11/02 16:37:14 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tdst;
	unsigned char	*tsrc;
	size_t			i;

	i = 0;
	if (src == NULL && dst == NULL)
		return (dst);
	tdst = (unsigned char *)dst;
	tsrc = (unsigned char *)src;
	while (i < n)
	{
		tdst[i] = tsrc[i];
		i++;
	}
	return (dst);
}
