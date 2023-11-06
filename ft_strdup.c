/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:30:52 by asnaji            #+#    #+#             */
/*   Updated: 2023/11/03 12:08:41 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	cpy = (char *)malloc((i + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	ft_strlcpy(cpy, s1, i + 1);
	return (cpy);
}
