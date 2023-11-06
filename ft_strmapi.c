/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:42:05 by asnaji            #+#    #+#             */
/*   Updated: 2023/11/04 00:06:36 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ts;
	unsigned int	i;
	size_t			len;

	i = 0;
	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	ts = (char *)malloc((len + 1) * sizeof(char));
	if (ts == NULL)
		return (NULL);
	while (s[i])
	{
		ts[i] = (*f)(i, s[i]);
		i++;
	}
	ts[i] = '\0';
	return (ts);
}
