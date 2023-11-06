/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:21:22 by asnaji            #+#    #+#             */
/*   Updated: 2023/11/03 00:13:48 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tdst;
	unsigned char	*tsrc;

	tdst = (unsigned char *)dst;
	tsrc = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (len == 0 || tdst == tsrc)
		return (dst);
	if (tdst > tsrc)
	{
		while (len > 0)
		{
			len--;
			tdst[len] = tsrc[len];
		}
		tdst[0] = tsrc[0];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
