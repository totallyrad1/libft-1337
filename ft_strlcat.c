/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:04:00 by asnaji            #+#    #+#             */
/*   Updated: 2023/11/03 11:12:10 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = 0;
	dstlen = 0;
	while (dst[dstlen] && dstlen < dstsize)
		dstlen++;
	while (src[srclen] && (srclen + dstlen + 1) < dstsize)
	{
		dst[dstlen + srclen] = src[srclen];
		srclen++;
	}
	if (dstlen < dstsize)
		dst[dstlen + srclen] = '\0';
	return (dstlen + ft_strlen(src));
}
