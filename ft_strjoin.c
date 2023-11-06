/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:26:18 by asnaji            #+#    #+#             */
/*   Updated: 2023/11/03 12:43:52 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	size_t	i;
	size_t	j;
	size_t	s1len;

	s1len = ft_strlen(s1);
	i = 0;
	j = 0;
	newstring = (char *)malloc((s1len + ft_strlen(s2) + 1) * sizeof(char));
	if (newstring == NULL)
		return (NULL);
	while (s1[i])
	{
		newstring[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		newstring[i] = s2[j];
		j++;
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
