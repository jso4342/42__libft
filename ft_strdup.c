/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 14:49:33 by sjang             #+#    #+#             */
/*   Updated: 2019/10/16 18:45:33 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		length;
	int		i;

	length = 0;
	while (s1[length] != '\0')
		length++;
	if (!(p = (char*)malloc(sizeof(char) * (length + 1))))
		return (0);
	i = length;
	length = 0;
	while (length < i)
	{
		p[length] = s1[length];
		length++;
	}
	p[length] = '\0';
	return (p);
}
